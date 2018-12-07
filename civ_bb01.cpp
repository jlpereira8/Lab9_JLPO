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
    int* a=new int[texto.size()];
    string g="";
    string* testo=new string[texto.size()];
    for (int i = 0; i < texto.size(); ++i) {
        int conv=texto.at(i);
        a[i]=conv;
    }
    for (int j = 0; j < texto.size() ; ++j) {
        int* bin=new int[8];
        int num=a[j];
        int aux =0;
        while(num>0){
            int mod=num%2;
            int nuevo=num/2;
            bin[aux]=mod;
            num=nuevo;
            g+=nuevo;
            aux++;
        }
        string ret=invertir(bin,8);
        testo[j]=ret;

    }
    string ret="";
    for (int k = 0; k < texto.size(); ++k) {

        if (k==texto.size()-1){
            ret+=testo[k];
        }else {
            ret += testo[k] + "-";
        }
    }


    return g;
}

civ_bb01::civ_bb01(const string &nombre, const string &planeta, const string &lider, const int &edad)
        : Civilizacion_Alien(nombre, planeta, lider, edad) {}

civ_bb01::civ_bb01() {}

string invertir(int* x,int s){
    string o="";
    int aux=7;
    for(int i=0;i<s;i++){
        o=x[aux-i];
    }
    return o;

}
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

