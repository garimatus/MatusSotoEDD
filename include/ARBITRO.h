#ifndef ARBITRO_H
#define ARBITRO_H
#include "PERSONA.h"
#include "TARJETA.h"

class ARBITRO : public PERSONA{
    public:
        ARBITRO();
        void set_rut(long int);
        void set_nombre(string);
        void set_FechaNac(int,int,int);
        void set_mail(string);
        void set_nacionalidad(string);
        void set_sueldo(long long int);
        void set_tarjetas(int,int);
        void set_partidos(int);
        virtual ~ARBITRO();
        RUT get_rut();
        string get_nombre();
        FECHA get_FechaNac();
        string get_mail();
        string get_nacionalidad();
        long long int get_sueldo();
        TARJETA get_tarjetas();
        int get_partidos();
    protected:
    private:
        TARJETA tarjetas;
        int partidos;
};

#endif // ARBITRO_H
