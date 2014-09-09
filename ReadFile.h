/*Fall 2014
  Dillon Strunk*/
#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

class ReadFile
{
   private:
   ifstream input_file;
   bool _eof;
   bool closed;
   
   public:
   //constructor
   ReadFile(const char* file_name);
   //destructor
   ~ReadFile();
   
   String* readLine();
   bool eof();
   void close();
};

#endif
