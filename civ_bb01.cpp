//
// Created by jlpereira on 12/7/18.
//

#include "civ_bb01.h"
#include "iostream"
#include "cstring"
#include <math.h>


using std::cout;
using std::endl;





civ_bb01::civ_bb01() {

}

civ_bb01::civ_bb01(const string &nombre, const string &planeta, const string &lider, const int &edad)
        : Civilizacion_Alien(nombre, planeta, lider, edad) {

}

string civ_bb01::decodificar(string x) {
    x+='-';
    string final;
    string temp;
    for (int i = 0; i < x.size(); i++) {
        if (x.at(i)!='-') {
            temp+=x.at(i);
        }else if(x.at(i)=='-'){
            int z=atoi(temp.c_str());
            int decNum = 0;
            int v=1;
            int rem=0;
            while (z!=0) {
                rem=z%10;
                decNum=decNum+rem*v;
                v*=2;
                z/=10;
            }
            char cosas=static_cast<char>(decNum);
            final+=cosas;
            temp.clear();
        }
    }
    return final;
}

string civ_bb01::codificar(string x) {
    string final;
    int b=0;
    for (int i = 0; i < x.size(); i++) {
        char cac=x.at(i);
        int num=cac;
        int a[7];
        int j=0;
        while (num>0) {
            b=num%2;
            final+=std::to_string(b);
            num/=2;
        }
        final+='-';
    }
    return final;
}
