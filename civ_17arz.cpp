//
// Created by jlpereira on 12/7/18.
//

#include "civ_17arz.h"

string civ_17arz::decodificar(string texto) {
    string ret="";
    for (int i = 0; i <texto.size() ; ++i) {
        ret+=texto.at(i);
    }
    return ret;
}

string civ_17arz::codificar(string texto) {
    string ret="";
    for (int i = texto.size(); i <0 ; --i) {
        ret+=texto.at(i);
    }
    return ret;
}
