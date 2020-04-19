#ifndef PARTIDO_H
#define PARTIDO_H
#include "PAIS.h"
#include "FECHA.h"
#include "ARBITRO.h"


class PARTIDO{
    public:
        PARTIDO();
        void set_codigo(string);
        void set_visita(PAIS);
        void set_local(PAIS);
        void set_fecha(int,int,int);
        void set_goles_visita(int);
        void set_goles_local(int);
        void set_nombre_juez(string);
        void set_rut_juez(long int);
        void set_FechaNac_juez(int,int,int);
        void set_nacionalidad_juez(string);
        void set_mail_juez(string);
        void set_sueldo_juez(long long int);
        void set_tarjetas_juez(int,int);
        void set_partidos_juez(int);
        string get_codigo();
        PAIS get_visita();
        PAIS get_local();
        FECHA get_fecha();
        int get_goles_visita();
        int get_goles_local();
        string get_nombre_juez();
        RUT get_rut_juez();
        FECHA get_FechaNac_juez();
        string get_nacionalidad_juez();
        string get_mail_juez();
        long long int get_sueldo_juez();
        TARJETA get_tarjetas_juez();
        int get_partidos_juez();
        string get_nombre_visita();
        string get_nombre_local();
        virtual ~PARTIDO();
    protected:
    private:
        string codigo;
        PAIS visita;
        PAIS local;
        FECHA fecha;
        int goles_visita;
        int goles_local;
        /* *** */
        ARBITRO juez; // CREO QUE EN EL ENUNCIADO FALTA ESTO PARA DARLE UN USO A LA CLASE
        /* *** */
};

#endif // PARTIDO_H
