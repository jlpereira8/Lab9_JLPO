//
// Created by jlpereira on 12/7/18.
//

#include "Civilizacion_Alien.h"



Civilizacion_Alien::Civilizacion_Alien() {}

const string &Civilizacion_Alien::getNombre() const {
    return nombre;
}

void Civilizacion_Alien::setNombre(const string &nombre) {
    Civilizacion_Alien::nombre = nombre;
}

const string &Civilizacion_Alien::getPlaneta() const {
    return planeta;
}

void Civilizacion_Alien::setPlaneta(const string &planeta) {
    Civilizacion_Alien::planeta = planeta;
}

const string &Civilizacion_Alien::getLider() const {
    return lider;
}

void Civilizacion_Alien::setLider(const string &lider) {
    Civilizacion_Alien::lider = lider;
}

const string &Civilizacion_Alien::getEdad() const {
    return edad;
}

void Civilizacion_Alien::setEdad(const string &edad) {
    Civilizacion_Alien::edad = edad;
}

string Civilizacion_Alien::decodificar(string texto) {
    return "";
}

string Civilizacion_Alien::codificar(string texto) {
    return "";
}

Civilizacion_Alien::Civilizacion_Alien(const string &nombre, const string &planeta, const string &lider,
                                       const int &edad) {

}

int Civilizacion_Alien::getEdad() const {
    return edad;
}

void Civilizacion_Alien::setEdad(int edad) {
    Civilizacion_Alien::edad = edad;
}


