#include "banner.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void banner() {
  cout << "======================================= \n";
  cout << "            GESTOR DE RESERVAS       \n";
  cout << "======================================= \n"; 
}

void time_table() {
  cout << endl;
  ifstream config("config.txt");
  if (!config.is_open()) {
    cerr << "no se pudo abrir config.txt" << endl;
  }
  
  string day;
  int open, close;

  while(config >> day >> open >> close) {
    cout << left << setw(12) << day;
    if (open == 0 && close == 0) {
      cout << "Cerrado" << endl;
    } else {
      cout << open << ":00 - " << close << ":00" << endl; 
    }
  }
}