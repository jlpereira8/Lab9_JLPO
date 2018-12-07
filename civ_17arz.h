//
// Created by jlpereira on 12/7/18.
//

#ifndef LAB9_JLPO_CIV_17ARZ_H
#define LAB9_JLPO_CIV_17ARZ_H


#include "Civilizacion_Alien.h"

class civ_17arz : public Civilizacion_Alien{
public:
    string codificar(string texto);
    string decodificar(string texto);

    civ_17arz();

    civ_17arz(const string &nombre, const string &planeta, const string &lider, const int &edad);
};


#endif //LAB9_JLPO_CIV_17ARZ_H
