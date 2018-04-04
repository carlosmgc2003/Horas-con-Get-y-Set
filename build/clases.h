#ifndef CLASES_H_INCLUDED
#define CLASES_H_INCLUDED
class Hora{
    private:
        int hora,minuto,segundo;
    public:
        void mostrar24();
        void mostrar12();
        void setHorario(int,int,int);
        int getHora();
        int getMinuto();
        int getSegundo();
        void setHora(int);
        void setMinuto(int);
        void setSegundo(int);

        //Hora();
        //Hora(int);
        //Hora(int,int);
        Hora(int = 0,int = 0,int = 0);
        Hora(Hora&);//Constructor del objeto hora
        ~Hora();//Destructor del objeto hora
};


#endif // CLASES_H_INCLUDED
