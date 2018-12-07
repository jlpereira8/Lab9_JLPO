//
// Created by jlpereira on 12/7/18.
//

#include "civ_17arz.h"

string civ_17arz::decodificar(string texto) {
    string ret="";
    for (int i = texto.size(); i >= 0 ; --i) {
        ret+=texto[i];
    }
    return ret;
}

string civ_17arz::codificar(string texto) {
    string ret="";
    for (int i = texto.size(); i >= 0 ; --i) {
        ret+=texto[i];
    }
    return ret;
}

civ_17arz::civ_17arz(const string &nombre, const string &planeta, const string &lider, const int &edad)
        : Civilizacion_Alien(nombre, planeta, lider, edad) {}

civ_17arz::civ_17arz() {}
