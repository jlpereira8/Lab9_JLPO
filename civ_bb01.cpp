//
// Created by jlpereira on 12/7/18.
//

#include "civ_bb01.h"
#include "iostream"
#include "cstring"

using std::cout;
using std::endl;

string invertir(int* ,int );

string civ_bb01::decodificar(string texto) {

    //Tokenizer

    char str[texto.size()];
    for (int i = 0; i < texto.size(); ++i) {
        str[i]=texto.at(i);
    }
    char* point;
    point = strtok(str,",");
    str[texto.size()]=NULL;
    while (point!=NULL){
        
        point = strtok(NULL,",");
    }

    //



    return "";
}

string civ_bb01::codificar(string texto) {
    int* a=new int[texto.size()];
    string* testo=new string[texto.size()];
    for (int i = 0; i < texto.size(); ++i) {
        int conv=texto.at(i);
        a[i]=conv;
    }
    for (int j = 0; j < texto.size() ; ++j) {
        int* bin=new int[8];
        int num=a[j];
        int aux =0;
        while(num>0){
            int mod=num%2;
            int nuevo=num/2;
            bin[aux]=mod;
            num=nuevo;
            aux++;
        }

        string ret=invertir(bin,8);
        testo[j]=ret;

    }
    string ret="";
    for (int k = 0; k < texto.size(); ++k) {

        if (k==texto.size()-1){
            ret+=testo[k];
        }else {
            ret += testo[k] + "-";
        }
    }


    return ret;
}
string invertir(int* x,int s){
    string o="";
    int aux=7;
    for(int i=0;i<s;i++){
        o=x[aux-i];
    }
    return o;

}