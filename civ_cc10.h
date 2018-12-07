//
// Created by jlpereira on 12/7/18.
//

#ifndef LAB9_JLPO_CIV_CC10_H
#define LAB9_JLPO_CIV_CC10_H


#include "Civilizacion_Alien.h"

class civ_cc10: public Civilizacion_Alien{

public:
    civ_cc10();

    civ_cc10(const string &nombre, const string &planeta, const string &lider, const int &edad);

    string codificar(string texto);
    string decodificar(string texto);

};


#endif //LAB9_JLPO_CIV_CC10_H
