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
  conver -= resta;
  if(conver <= 97){
    conver = 97 - conver;
    conver = 122 - conver;
  }
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
int conver2 = 0;
int conver3 = 0;
for(int i = 0; i < texto.size();i++){
  //pasado a entero
  conver = (int) texto[i];
  conver += suma;
  if(conver >= 122){
    conver2 = conver - 122;
    conver3 = 97 + conver2;
    conver = conver3;
  }


  //pasar a string
  result += conver;
}
return result;
}

civ_cc10::civ_cc10(const string &nombre, const string &planeta, const string &lider, const int &edad)
        : Civilizacion_Alien(nombre, planeta, lider, edad) {}

civ_cc10::civ_cc10() {}
