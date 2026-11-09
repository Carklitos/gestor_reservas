//LOCAL LIBS
#include "banner.h"

//EXTERNAL LIBS
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  //arguments errors
  if (argc != 4) {
    cerr << "Uso: " << argv[0] << "<cmd> <h> <h>" << endl;
    return 1;
  }

  string cmd = argv[1];
  int 


  banner();
  time_table();

  return 0;
}