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

    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getPlaneta() const;

    void setPlaneta(const string &planeta);

    const string &getLider() const;

    void setLider(const string &lider);

    const string &getEdad() const;

    void setEdad(const string &edad);

    //metodos
    virtual string codificar(string texto);
    virtual string decodificar(string texto);


};


#endif //LAB9_JLPO_CIVILIZACION_ALIEN_H
