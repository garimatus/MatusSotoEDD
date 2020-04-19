#ifndef JUGADOR_H
#define JUGADOR_H
#include "PERSONA.h"
#include "TARJETA.h"

class JUGADOR : public PERSONA{
    private:
        string posicion;
        int goles;
        bool titular;
        int faltas;
        TARJETA tarjetas;
    public:
        JUGADOR();
        void set_rut(long int);
        void set_nombre(string);
        void set_FechaNac(int,int,int);
        void set_mail(string);
        void set_nacionalidad(string);
        void set_sueldo(long long int);
        void set_posicion(string);
        void set_goles(int);
        void set_titularidad(bool);
        void set_faltas(int);
        void set_tarjetas(int,int);
        RUT get_Rut();
        string get_nombre();
        string get_posicion();
        int get_goles();
        bool get_titularidad();
        int get_faltas();
        TARJETA get_tarjetas();
        FECHA get_FechaNac();
        ~JUGADOR();
};

#endif // JUGADOR_H
