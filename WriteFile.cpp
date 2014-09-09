#include "WriteFile.h"
#include <sstream>

WriteFile::WriteFile(const char* fn)
{
   file_name = fn;
   
   wf->output_file.open(fn);
   wf->closed = false;
}

WriteFile::~WriteFile()
{
   delete wf;
}

void WriteFile::close()
{
   if (!wf->closed)
   {
      wf->output_file.close();
      wf->closed = true;
   }
}

void WriteFile::writeLine(WriteFile* wf, String* line)
{
   if (!wf->closed && line->length() > 0)
   {
      wf->output_file << line->getText() << endl;
   }
}
