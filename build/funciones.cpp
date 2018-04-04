/* Archivo creado por Carlos Maceira
Ao 2018 Paradigmas III*/
#include <iostream>
#include <iomanip>
#include "clases.h"
using namespace std;
void Hora::mostrar24(){
    cout << setfill('0') << setw(2) << hora << " : " << setw(2) << minuto << " : " << setw(2) << segundo << endl;
}
void Hora::mostrar12(){
    cout << ((hora == 0 || hora == 12)? 12 : hora % 12) << " : " << setfill('0') << setw(2) << minuto << " : " << setw(2) << segundo << ((hora < 12)? " AM" : " PM") << endl;
}
void Hora::setHorario(int h,int m,int s){
    setHora(h);
    setMinuto(m);
    setSegundo(s);
}

Hora::~Hora(){
    cout<<"Se destruye el objeto Hora";
    mostrar24();
}
void Hora::setHora(int h){
    hora = (h >= 0 && h < 24)? h: h%24;
}

void Hora::setMinuto(int m){
    minuto = (m >= 0 && m < 60)? m : 0;
}

void Hora::setSegundo(int s){
    segundo = (s >=  0&& s < 60)? s : 0;
}

int Hora::getHora(){
    return hora;
}

int Hora::getMinuto(){
    return minuto;
}

int Hora::getSegundo(){
    return segundo;
}

Hora :: Hora(int h, int m, int s)
{
 setHorario(h,m,s);
}
Hora::Hora(Hora& h){
    segundo = h.segundo;
    minuto = h.minuto;
    hora = h.hora;
}
