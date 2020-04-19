#include "TECNICO.h"
#include "PERSONA.h"

TECNICO::TECNICO(){
}

void TECNICO::set_mundial(bool M){
    mundial = M;
}

void TECNICO::set_experiencia(int exp){
    experiencia = exp;
}

void TECNICO::set_nombre(string nom){
    PERSONA::set_nombre(nom);
}


void TECNICO::set_rut(long int R){
    PERSONA::set_Rut(R);
}

RUT TECNICO::get_rut(){
    return PERSONA::get_Rut();
}

string TECNICO::get_nombre(){
    return PERSONA::get_nombre();
}

FECHA TECNICO::get_FechaNac(){
    return PERSONA::get_FechaNac();
}

string TECNICO::get_nacionalidad(){
    return PERSONA::get_nacionalidad();
}

string TECNICO::get_mail(){
    return PERSONA::get_mail();
}

long long int TECNICO::get_sueldo(){
    return PERSONA::get_sueldo();
}

bool TECNICO::get_mundial(){
    return mundial;
}

int TECNICO::get_experiencia(){
    return experiencia;
}

void TECNICO::set_FechaNac(int dd,int mm,int aa){
    PERSONA::set_FechaNac(dd,mm,aa);
}

void TECNICO::set_mail(string nom){
    PERSONA::set_mail(nom);
}

void TECNICO::set_nacionalidad(string nom){
    PERSONA::set_nacionalidad(nom);
}

void TECNICO::set_sueldo(long long int P){
    PERSONA::set_sueldo(P);
}

TECNICO::~TECNICO(){
}
