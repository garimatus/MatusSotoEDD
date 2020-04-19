#include "JUGADOR.h"

JUGADOR::JUGADOR(){
    mail = "no asignado";
    nacionalidad = "no asignado";
    sueldo = 0;
    faltas = 0;
}

void JUGADOR::set_rut(long int R){
    PERSONA::set_Rut(R);
}

void JUGADOR::set_nombre(string nom){
    PERSONA::set_nombre(nom);
}

void JUGADOR::set_posicion(string pos){
    posicion = pos;
}

void JUGADOR::set_goles(int gol){
    goles = gol;
}

void JUGADOR::set_titularidad(bool T){
    titular = T;
}

void JUGADOR::set_faltas(int F){
    faltas = F;
}

void JUGADOR::set_tarjetas(int A,int R){
    tarjetas.set_tarjetas(A,R);
}

string JUGADOR::get_nombre(){
    return PERSONA::get_nombre();
}

string JUGADOR::get_posicion(){
    return posicion;
}

FECHA JUGADOR::get_FechaNac(){
    return PERSONA::get_FechaNac();
}

RUT JUGADOR::get_Rut(){
    return PERSONA::get_Rut();
}

TARJETA JUGADOR::get_tarjetas(){
    return tarjetas;
}

int JUGADOR::get_faltas(){
    return faltas;
}

bool JUGADOR::get_titularidad(){
    return titular;
}

void JUGADOR::set_nacionalidad(string nom){
    PERSONA::set_nacionalidad(nom);
}

void JUGADOR::set_mail(string nom){
    PERSONA::set_mail(nom);
}

void JUGADOR::set_sueldo(long long int P){
    PERSONA::set_sueldo(P);
}

void JUGADOR::set_FechaNac(int dd,int mm,int aa){
    PERSONA::set_FechaNac(dd,mm,aa);
}

int JUGADOR::get_goles(){
    return goles;
}


JUGADOR::~JUGADOR(){
}
