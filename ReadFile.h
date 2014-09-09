#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class ReadFile
{
   private:
   const char* file_name;
   ifstream input_file;
   bool _eof;
   bool closed;
   ReadFile* rf;
   
   public:
   //constructor
   ReadFile(const char* file_name);
   //destructor
   ~ReadFile();
   
   String* readLine(ReadFile* rf);
   bool eof(ReadFile* rf);
   void close();
};

#endif
