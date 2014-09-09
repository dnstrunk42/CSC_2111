#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class WriteFile
{
   private:
   const char* file_name;
   ofstream output_file;
   bool closed;
   WriteFile* wf;
   
   public:
   WriteFile(const char* file_name);
   ~WriteFile();
   void writeLine(WriteFile* wf, String* line);
   void close();
   
};

#endif
