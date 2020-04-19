#include "MUNDIAL.h"

MUNDIAL::MUNDIAL(){
    codigoMundial = "sin asignar";
    paisSede = "rusia";
}

void MUNDIAL::set_codigoMundial(string nom){
    codigoMundial = nom;
}

void MUNDIAL::set_fecha_inicio(int dd,int mm,int aa){
    inicio.set_fecha(dd,mm,aa);
}

void MUNDIAL::set_fecha_fin(int dd,int mm,int aa){
    fin.set_fecha(dd,mm,aa);
}

void MUNDIAL::set_paisSede(string nom){
    paisSede = nom;
}

void MUNDIAL::set_visita(PAIS V,int num){
    partidos[num].set_visita(V);
}

void MUNDIAL::set_local(PAIS L,int num){
    partidos[num].set_local(L);
}

void MUNDIAL::set_codigo_partido(string nom,int num){
    partidos[num].set_codigo(nom);
}

void MUNDIAL::set_fecha_partido(int dd,int mm,int aa,int num){
    partidos[num].set_fecha(dd,mm,aa);
}

void MUNDIAL::set_goles_visita(int G,int num){
    partidos[num].set_goles_visita(G);
}

void MUNDIAL::set_goles_local(int G,int num){
    partidos[num].set_goles_local(G);
}

void MUNDIAL::set_Rut_juez(long int R, int num){
    partidos[num].set_rut_juez(R);
}

void MUNDIAL::set_Nacionalidad_juez(string nom, int num){
    partidos[num].set_nacionalidad_juez(nom);
}

void MUNDIAL::set_Nombre_juez(string nom,int num){
    partidos[num].set_nombre_juez(nom);
}

void MUNDIAL::set_FechaNac_juez(int dd,int mm,int aa, int num){
    partidos[num].set_FechaNac_juez(dd,mm,aa);
}

void MUNDIAL::set_Mail_juez(string nom,int num){
    partidos[num].set_mail_juez(nom);
}

void MUNDIAL::set_Sueldo_juez(long long int P,int num){
    partidos[num].set_sueldo_juez(P);
}

void MUNDIAL::set_Partidos_juez(int exp,int num){
    partidos[num].set_partidos_juez(exp);
}

void MUNDIAL::set_Tarjetas_juez(int A,int R,int num){
    partidos[num].set_tarjetas_juez(A,R);
}

string MUNDIAL::get_codigo_partido(int num){
    return partidos[num].get_codigo();
}

PARTIDO MUNDIAL::get_partido(int num){
    return partidos[num];
}

string MUNDIAL::get_Nombre_juez(int num){
    return partidos[num].get_nombre_juez();
}

FECHA MUNDIAL::get_FechaNac_juez(int num){
    return partidos[num].get_FechaNac_juez();
}

string MUNDIAL::get_Mail_juez(int num){
    return partidos[num].get_mail_juez();
}

string MUNDIAL::get_Nacionalidad_juez(int num){
    return partidos[num].get_nacionalidad_juez();
}

long long int MUNDIAL::get_Sueldo_juez(int num){
    return partidos[num].get_sueldo_juez();
}

TARJETA MUNDIAL::get_Tarjetas_juez(int num){
    return partidos[num].get_tarjetas_juez();
}

int MUNDIAL::get_Partidos_juez(int num){
    return partidos[num].get_partidos_juez();
}

RUT MUNDIAL::get_Rut_juez(int num){
    return partidos[num].get_rut_juez();
}

MUNDIAL::~MUNDIAL(){
}

