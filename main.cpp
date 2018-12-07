#include <iostream>
#include "Civilizacion_Alien.h"
#include "civ_17arz.h"
#include "civ_bb01.h"
#include "civ_cc10.h"
#include <fstream>
#include <sstream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ostream;
using std::stringstream;
using std::vector;

int main() {
    vector<Civilizacion_Alien *> lista_civilizacion;
    int op = 0;

    do {
        cout << "1. Actualizar civilizaciones" << endl
             << "2. Codificar desde programa" << endl
             << "3. Decodificar desde programa" << endl
             << "4. Codificar desde archivo" << endl
             << "5. Decodificar desde archivo" << endl
             << "6. Ver Historial de mensajes" << endl
             << "7. Salir" << endl
             << "Ingrese opcion" << endl;
        cin >> op;
        switch (op) {
            case 1: {
                string fileName="InfoCiv.txt";
                ifstream inputFile;
                inputFile.open(fileName.c_str());
                if (!inputFile.is_open()) {
                    cout << "El archivo no existe.." << endl;
                } else {
                    string buffer;
                    string nombre_l;
                    string planeta_l;
                    string lider_l;
                    int edad_l;
                    string tipocod_l;
                    cout << "El contenido del archivo es: " << endl;
                    while (!inputFile.eof()) {
                        getline(inputFile, buffer);
                        int counter = 0;
                        stringstream nombre_ss;
                        stringstream planeta_ss;
                        stringstream lider_ss;
                        stringstream edad_ss;
                        stringstream tipocod_ss;
                        for (int i = 0; i < buffer.size(); i++) {
                            if (buffer[i] == '|') {
                                counter++;
                            }
                            if (buffer[i] != '|' && counter == 0) {
                                nombre_ss >> buffer[i];
                            }
                            if (buffer[i] != '|' && counter == 1) {
                                planeta_ss >> buffer[i];
                            }
                            if (buffer[i] != '|' && counter == 2) {
                                lider_ss >> buffer[i];
                            }
                            if (buffer[i] != '|' && counter == 3) {
                                edad_ss >> buffer[i];
                            }

                            if (buffer[i] != '|' && counter == 4) {
                                tipocod_ss >> buffer[i];
                            }
                        }
                        nombre_l = nombre_ss.str();
                        planeta_l = planeta_ss.str();
                        lider_l = lider_ss.str();
                        string edad_s = edad_ss.str();
                        tipocod_l = tipocod_ss.str();
                        edad_l = std::stoi(edad_s);

                        if (tipocod_l == "Civ_CC10") {
                            Civilizacion_Alien *civ_cc10_l = new civ_cc10(nombre_l, planeta_l, lider_l, edad_l);
                            lista_civilizacion.push_back(civ_cc10_l);
                        }

                        if (tipocod_l == "Civ_BB01") {
                            Civilizacion_Alien *civ_bb01_l = new civ_bb01(nombre_l, planeta_l, lider_l, edad_l);
                            lista_civilizacion.push_back(civ_bb01_l);
                        }
                        if (tipocod_l == "Civ_17ARZ") {
                            Civilizacion_Alien *civ_17Arz_l = new civ_17arz(nombre_l, planeta_l, lider_l, edad_l);
                            lista_civilizacion.push_back(civ_17Arz_l);
                        }

                        //lista_civilizacion.push_back(new Civilizacion(nombre_l, planeta_l, lider_l, edad_l));

                        //cout<<buffer<<endl;
                    }
                    inputFile.close();

                }
                break;
            }case 2: {
                //codificar desde programa
                cout << "************Codificar*************" << endl;
                cout << "1) civ_bb01 " << endl;
                cout << "2) civ_cc10 " << endl;
                cout << "3) civ_17arz " << endl;
                cout << "Ingrese su desicion" << endl;
                int dess;
                cin >> dess;
                if (dess == 1) {
                    cout << "Ingrese un texto: " << endl;
                    string texto;
                    cin >> texto;
                    Civilizacion_Alien *ca = new civ_bb01();
                    string g = ca->codificar(texto);
                    cout << "Codificado: " << g << endl;
                } else if (dess == 2) {
                    cout << "Ingrese un texto: " << endl;
                    string texto;
                    cin >> texto;
                    Civilizacion_Alien *ca = new civ_cc10();
                    string g = ca->codificar(texto);
                    cout << "Codificado: " << g << endl;
                } else if (dess == 3) {
                    cout << "Ingrese un texto: " << endl;
                    string texto;
                    cin >> texto;
                    Civilizacion_Alien *ca = new civ_17arz();
                    string g = ca->codificar(texto);
                    cout << "Codificado: " << g << endl;
                } else {
                    cout << "Dato no valido..." << endl;
                }

            }break;
                case 3: {
                    //decodificar desde programa
                    cout << "************Decodificar*************" << endl;
                    cout << "1) civ_bb01 " << endl;
                    cout << "2) civ_cc10 " << endl;
                    cout << "3) civ_17arz " << endl;
                    cout << "Ingrese su desicion" << endl;
                    int dess;
                    cin >> dess;
                    if (dess == 1) {
                        cout << "Ingrese un texto: " << endl;
                        string texto;
                        cin >> texto;
                        Civilizacion_Alien *ca = new civ_bb01();
                        string g = ca->decodificar(texto);
                        cout << "Decodificado: " << g << endl;
                    } else if (dess == 2) {
                        cout << "Ingrese un texto: " << endl;
                        string texto;
                        cin >> texto;
                        Civilizacion_Alien *ca = new civ_cc10();
                        string g = ca->decodificar(texto);
                        cout << "Decodificado: " << g << endl;
                    } else if (dess == 3) {
                        cout << "Ingrese un texto: " << endl;
                        string texto;
                        cin >> texto;
                        Civilizacion_Alien *ca = new civ_17arz();
                        string g = ca->decodificar(texto);
                        cout << "Decodificado: " << g << endl;
                    } else {
                        cout << "Dato no valido..." << endl;
                    }

                }
                break;

                case 4: {

                }
                break;

                case 5: {


                    case 6: {

                    }
                    break;

                    default:
                        cout << "Saliendo..." << endl;
                }
                break;
                op = 7;
            }

        }
        while (op != 7);
        return 0;
    }

