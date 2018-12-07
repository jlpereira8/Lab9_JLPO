//
// Created by jlpereira on 12/7/18.
//

#ifndef LAB9_JLPO_CIV_BB01_H
#define LAB9_JLPO_CIV_BB01_H


#include "Civilizacion_Alien.h"

class civ_bb01 : public Civilizacion_Alien{
public:
    civ_bb01();

    civ_bb01(const string &nombre, const string &planeta, const string &lider, const int &edad);

    string codificar(string texto);
    string decodificar(string texto);
};


#endif //LAB9_JLPO_CIV_BB01_H
