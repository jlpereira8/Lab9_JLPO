#include <iostream>
#include "Civilizacion_Alien.h"
#include "civ_17arz.h"
#include "civ_bb01.h"
#include "civ_cc10.h"


using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ostream;

int main() {

    int op = 0;

    do {
      cout<<"1. Actualizar civilizaciones"<<endl
      <<"2. Codificar desde programa"<<endl
      <<"3. Decodificar desde programa"<<endl
      <<"4. Codificar desde archivo"<<endl
      <<"5. Decodificar desde archivo"<<endl
      <<"6. Ver Historial de mensajes"<<endl
      <<"7. Salir"<<endl
      <<"Ingrese opcion"<<endl;
      cin>>op;
      switch (op) {
        case 1:{

        }break;

        case 2:{

        }break;

        case 3:{

        }break;

        case 4:{
            Civilizacion_Alien* cv=new civ_bb01();
            string g = cv->codificar("bacaz");
            //string r=cv->decodificar("emoc al es xirdoR");
            cout<<g<<endl;
           // cout<<r<<endl;
        }break;

        case 5:{


        case 6:{

        }break;

        default:
          cout<<"Saliendo..."<<endl;
        }break;
          op = 7;
      }

    } while(op != 7);
    return 0;
}
