//
// Created by jlpereira on 12/7/18.
//

#include "civ_bb01.h"
#include "iostream"
#include "cstring"
#include <math.h>


using std::cout;
using std::endl;

string civ_bb01::decodificar(string texto) {

  return result;
}

string civ_bb01::codificar(string texto) {
  string result;
  int size = 8;
  for(int i = 0; i < texto.size();i++){
    result = "";
    //pasado a entero
    conver = (int) texto[i];
    for (int j = 0; j < size; j++) {
      result += conver % 2;
    }
    result += "-";
  }

  for (int i = 0; i >= 0; i++) {
    
  }
  return result;
}
