//
// Created by jlpereira on 12/7/18.
//

#ifndef LAB9_JLPO_CIVILIZACION_ALIEN_H
#define LAB9_JLPO_CIVILIZACION_ALIEN_H

#include "iostream"
#include "string"

using std::string;

class Civilizacion_Alien {
private:
    string nombre;
    string planeta;
    string lider;
    string edad;
public:
    Civilizacion_Alien(const string &nombre, const string &planeta, const string &lider, const string &edad);

    Civilizacion_Alien();

    virtual string codificar(string texto);
    virtual string decodificar(string texto);


};


#endif //LAB9_JLPO_CIVILIZACION_ALIEN_H
