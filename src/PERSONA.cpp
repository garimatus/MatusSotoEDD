#include "PERSONA.h"

PERSONA::PERSONA(){
}

void PERSONA::set_Rut(long int R){
    Rut.set_rut(R);
}

void PERSONA::set_nombre(string nom){
        nombre = nom;
}

void PERSONA::set_FechaNac(int dd,int mm,int aa){
    FechaNac.set_fecha(dd,mm,aa);
}

void PERSONA::set_mail(string M){
    mail = M;
}

void PERSONA::set_nacionalidad(string nac){
    nacionalidad = nac;
}

void PERSONA::set_sueldo(long long int P){
    sueldo = P;
}

RUT PERSONA::get_Rut(){
    return Rut;
}

string PERSONA::get_nombre(){
        return nombre;
}

FECHA PERSONA::get_FechaNac(){
    return FechaNac;
}

string PERSONA::get_mail(){
    return mail;
}

string PERSONA::get_nacionalidad(){
    return nacionalidad;
}

long long int PERSONA::get_sueldo(){
    return sueldo;
}

PERSONA::~PERSONA(){
}
