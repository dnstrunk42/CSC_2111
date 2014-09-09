/*Fall 2014
  Dillon Strunk*/
#include "WriteFile.h"
#include <sstream>

WriteFile::WriteFile(const char* fn)
{
   output_file.open(fn);
   closed = false;
}

WriteFile::~WriteFile()
{

}

void WriteFile::close()
{
   if (!closed)
   {
      output_file.close();
      closed = true;
   }
}

void WriteFile::writeLine(String* line)
{
   if (!closed && line->length() > 0)
   {
      output_file << line->getText() << endl;
   }
}
