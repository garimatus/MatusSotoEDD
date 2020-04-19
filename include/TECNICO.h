#ifndef TECNICO_H
#define TECNICO_H
#include "PERSONA.h"

class TECNICO : public PERSONA{
    private:
        bool mundial;
        int experiencia;
    public:
        TECNICO();
        void set_mundial(bool);
        void set_experiencia(int);
        bool get_mundial();
        int get_experiencia();
        void set_rut(long int);
        string get_nombre();
        FECHA get_FechaNac();
        RUT get_rut();
        void set_nombre(string);
        void set_nacionalidad(string);
        void set_FechaNac(int,int,int);
        void set_sueldo(long long int);
        void set_mail(string);
        string get_nacionalidad();
        long long int get_sueldo();
        string get_mail();
        ~TECNICO();
};

#endif // TECNICO_H
