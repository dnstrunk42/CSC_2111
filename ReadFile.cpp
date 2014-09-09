#include "ReadFile.h"
#include <iostream>
/*Fall 2014
  Dillon Strunk*/
#include <string>

ReadFile::ReadFile(const char* fn)
{
   input_file.open(fn);
   closed = false;
   _eof = false;
}

ReadFile::~ReadFile()
{
  
}

bool ReadFile::eof()
{
   return _eof;
}

void ReadFile::close()
{
   if (!closed)
   {
      input_file.close();
      closed = true;
   }
}

String* ReadFile::readLine()
{
   if (closed) return NULL;
   if (_eof) return NULL;

   string text;
   _eof = !(getline(input_file, text));

   String* str = new String((const char*) text.c_str());
   return str;
}
