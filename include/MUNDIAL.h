#ifndef MUNDIAL_H
#define MUNDIAL_H
#include "FECHA.h"
#include "PARTIDO.h"


class MUNDIAL{
    public:
        MUNDIAL();
        void set_codigoMundial(string);
        void set_fecha_inicio(int,int,int);
        void set_fecha_fin(int,int,int);
        void set_paisSede(string);
        void set_visita(PAIS,int);
        void set_local(PAIS,int);
        void set_codigo_partido(string,int);
        void set_fecha_partido(int,int,int,int);
        void set_goles_visita(int,int);
        void set_goles_local(int,int);
        void set_Rut_juez(long int,int);
        void set_Nacionalidad_juez(string,int);
        void set_Nombre_juez(string,int);
        void set_FechaNac_juez(int,int,int,int);
        void set_Mail_juez(string,int);
        void set_Sueldo_juez(long long int,int);
        void set_Tarjetas_juez(int,int,int);
        void set_Partidos_juez(int,int);
        PARTIDO get_partido(int);
        string get_codigo_partido(int);
        string get_Nombre_juez(int);
        FECHA get_FechaNac_juez(int);
        string get_Mail_juez(int);
        string get_Nacionalidad_juez(int);
        long long int get_Sueldo_juez(int);
        TARJETA get_Tarjetas_juez(int);
        RUT get_Rut_juez(int);
        int get_Partidos_juez(int);
        virtual ~MUNDIAL();
    protected:
    private:
        string codigoMundial;
        FECHA inicio;
        FECHA fin;
        string paisSede;
        PARTIDO partidos[64];
};

#endif // MUNDIAL_H
