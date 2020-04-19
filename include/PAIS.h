#ifndef PAIS_H
#define PAIS_H
#include "JUGADOR.h"
#include "TECNICO.h"

using namespace std;

class PAIS{
    private:
        string codigo;
        string nombre;
        string continente;
        TECNICO profe;
        JUGADOR jugadores[24];
        long int habitantes;
        long int superficie;
        int mundiales;
        bool sede;
        string idioma;
        int partidos_ganados;
        int partidos_perdidos;
        int partidos_empatados;
    public:
        PAIS();
        void set_codigo(string);
        void set_continente(string);
        void set_rut_profe(long int);
        void set_nombre_profe(string);
        void set_nombre_jugador(string,int);
        void set_rut_jugador(long int,int);
        void set_posicion_jugador(string,int);
        void set_habitantes(long int);
        void set_superficie(long int);
        void set_mundiales(long int);
        void set_nombre_sede(string);
        void set_idioma(string);
        void set_titularidad(bool,int);
        void set_mundial_profe(bool);
        void set_experiencia_profe(int);
        void set_FechaNac_jugador(int,int,int,int);
        void set_FechaNac_profe(int,int,int);
        void set_ganados(long int);
        void set_perdidos(long int);
        void set_empatados(long int);
        void set_nacionalidad_jugador(string,int);
        void set_mail_jugador(string,int);
        void set_mail_profe(string);
        void set_sueldo_jugador(long long int,int);
        void set_faltas_jugador(long long int,int);
        void set_tarjetas_jugador(int,int,int);
        void set_goles_jugador(int,int);
        void set_nacionalidad_profe(string);
        void set_sueldo_profe(long long int);
        string get_codigo();
        string get_nombre();
        string get_continente();
        RUT get_rut_profe();
        RUT get_rut_jugador(int);
        TECNICO get_profe();
        string get_nombre_profe();
        string get_nombre_jugador(int);
        string get_posicion(int);
        long int get_habitantes();
        long int get_superficie();
        int get_mundiales();
        string get_idioma();
        JUGADOR get_jugador(int);
        bool get_sede();
        FECHA get_FechaNac_jugador(int);
        FECHA get_FechaNac_profe();
        string get_nacionalidad_jugador(int);
        string get_nacionalidad_profe();
        int get_ganados();
        int get_perdidos();
        int get_empatados();
        long long int get_sueldo_jugador(int);
        long long int get_sueldo_profe();
        string get_mail_profe();
        int get_faltas_jugador(int);
        bool get_titularidad(int);
        bool get_mundial_profe();
        int get_experiencia_profe();
        int get_goles_jugador(int);
        TARJETA get_tarjetas(int);
        ~PAIS();
};

#endif // PAIS_H
