#include "ReadFile.h"
#include <iostream>
#include <string>

ReadFile::ReadFile(const char* fn)
{
   file_name = fn;

   rf->input_file.open(fn);
   rf->closed = false;
   rf->_eof = false;
}

ReadFile::~ReadFile()
{
   delete rf;
}

bool ReadFile::eof(ReadFile* rf)
{
   return rf->_eof;
}

void ReadFile::close()
{
   if (!rf->closed)
   {
      rf->input_file.close();
      rf->closed = true;
   }
}

String* ReadFile::readLine(ReadFile* rf)
{
   if (rf->closed) return NULL;
   if (rf->_eof) return NULL;

   string text;
   rf->_eof = !(getline(rf->input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}
