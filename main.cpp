#include <iostream>

using std::cin;
using std::cout;
using std::endl;

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
