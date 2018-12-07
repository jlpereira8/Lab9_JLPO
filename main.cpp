#include <iostream>

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

string void codificar(string datos){
  //cesar
string result;
int suma = 17;
int conver= 0;
for(int i = 0; i < datos.size(),i++){
  //pasado a entero
  conver = datos[i];
  if(conver > 122){
    conver = conver - 122;
    conver = 97 + suma;
  }
  conver += suma;
  //pasar a string
  result += conver;
}
return result;
}

string void decodificar(string datos){
  //cesar
string result;
int resta = 17;
int conver= 0;
for(int i = 0; i < datos.size(),i++){
  //pasado a entero
  conver = datos[i];
  if(conver < 97){
    conver = 97 - conver;
    conver = 122 - conver;
  }
  conver -= resta;
  //pasar a string
  result += conver;
}
return result;
}
