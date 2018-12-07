//
// Created by jlpereira on 12/7/18.
//

#include "civ_cc10.h"
#include <cmath>

string civ_cc10::decodificar(string texto) {
  //cesar
  string result;
  int resta = 17;
  int conver= 0;
  for(int i = 0; i < texto.size();i++){
  //pasado a entero
  conver = (int) texto[i];
  if(conver < 97){
    conver = 97 - conver;
    conver = 122 - conver;
  }
  conver -= resta;
  //pasar a string
  result += conver;
  }
  return result;
}

string civ_cc10::codificar(string texto) {
  //cesar
string result;
int suma = 17;
int conver= 0;
for(int i = 0; i < texto.size();i++){
  //pasado a entero
  conver = (int) texto[i];
  conver += suma;
  if(conver >= 122){
    conver = conver - 122;
    conver = abs(conver);
    conver = 97 + conver;
  }

  //pasar a string
  result += conver;
}
return result;
}
