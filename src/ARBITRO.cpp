#include "ARBITRO.h"

ARBITRO::ARBITRO(){
    partidos = 0;
    sueldo = 0;
}

void ARBITRO::set_rut(long int R){
    PERSONA::set_Rut(R);
}

void ARBITRO::set_nombre(string nom){
    PERSONA::set_nombre(nom);
}

void ARBITRO::set_FechaNac(int dd,int mm,int aa){
    PERSONA::set_FechaNac(dd,mm,aa);
}

void ARBITRO::set_mail(string nom){
    PERSONA::set_mail(nom);
}

void ARBITRO::set_nacionalidad(string nom){
    PERSONA::set_nacionalidad(nom);
}

void ARBITRO::set_sueldo(long long int P){
    PERSONA::set_sueldo(P);
}

void ARBITRO::set_tarjetas(int A,int R){
    tarjetas.set_tarjetas(A,R);
}

void ARBITRO::set_partidos(int exp){
    partidos = exp;
}

RUT ARBITRO::get_rut(){
    return PERSONA::get_Rut();
}

string ARBITRO::get_nombre(){
    return PERSONA::get_nombre();
}

FECHA ARBITRO::get_FechaNac(){
    return PERSONA::get_FechaNac();
}

string ARBITRO::get_mail(){
    return PERSONA::get_mail();
}

string ARBITRO::get_nacionalidad(){
    return PERSONA::get_nacionalidad();
}

long long int ARBITRO::get_sueldo(){
    return PERSONA::get_sueldo();
}

TARJETA ARBITRO::get_tarjetas(){
    return tarjetas;
}

int ARBITRO::get_partidos(){
    return partidos;
}

ARBITRO::~ARBITRO(){
}
