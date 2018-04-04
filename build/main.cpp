#include <iostream>
#include <iomanip>
#include "clases.h"

using namespace std;
void incrementarMinutos(Hora &,int);
int main()
{
    Hora h;
    int hs,min,seg,m;
    cout<<"Ingrese hora,minuto,segundo";
    cin>>hs>>min>>seg;
    h.setHorario(hs,min,seg);
    cout<<"Hora ingresada: ";
    cout<<h.getHora()<<" : "<<h.getMinuto()<<" : "<<h.getSegundo()<<endl;
    cout<<"Ingrese la cantidad de minutos a agregar: ";
    cin>>m;
    incrementarMinutos(h,m);
    cout<<"Hora modificada :";
    h.mostrar24();
    return 0;
}
void incrementarMinutos (Hora &h,int cant){
    for(int i = 0;i < cant;i++){
        h.setMinuto((h.getMinuto() + 1)% 60);
        if(h.getMinuto() == 0)
            h.setHora((h.getHora() + 1)% 24);
    }
}