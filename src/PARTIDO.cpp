#include "PARTIDO.h"


PARTIDO::PARTIDO(){
    codigo = "sin asignar";
    goles_local = 0;
    goles_visita = 0;
}

void PARTIDO::set_codigo(string nom){
    codigo = nom;
}

void PARTIDO::set_visita(PAIS V){
    visita = V;
}

void PARTIDO::set_local(PAIS L){
    local = L;
}

void PARTIDO::set_fecha(int dd,int mm,int aa){
    fecha.set_fecha(dd,mm,aa);
}

void PARTIDO::set_goles_local(int G){
    goles_local = G;
}

void PARTIDO::set_goles_visita(int G){
    goles_visita = G;
}

string PARTIDO::get_codigo(){
    return codigo;
}

PAIS PARTIDO::get_visita(){
    return visita;
}

PAIS PARTIDO::get_local(){
    return local;
}

FECHA PARTIDO::get_fecha(){
    return fecha;
}

int PARTIDO::get_goles_visita(){
    return goles_visita;
}

int PARTIDO::get_goles_local(){
    return goles_local;
}

void PARTIDO::set_rut_juez(long int R){
    juez.set_rut(R);
}

void PARTIDO::set_nacionalidad_juez(string nom){
    juez.set_nacionalidad(nom);
}

void PARTIDO::set_nombre_juez(string nom){
    juez.set_nombre(nom);
}

string PARTIDO::get_nombre_visita(){
    return visita.get_nombre();
}

string PARTIDO::get_nombre_local(){
    return local.get_nombre();
}

void PARTIDO::set_FechaNac_juez(int dd,int mm,int aa){
    juez.set_FechaNac(dd,mm,aa);
}

void PARTIDO::set_mail_juez(string nom){
    juez.set_mail(nom);
}

void PARTIDO::set_sueldo_juez(long long int P){
    juez.set_sueldo(P);
}

void PARTIDO::set_partidos_juez(int exp){
    juez.set_partidos(exp);
}

void PARTIDO::set_tarjetas_juez(int A,int R){
    juez.set_tarjetas(A,R);
}

string PARTIDO::get_nombre_juez(){
    return juez.get_nombre();
}

FECHA PARTIDO::get_FechaNac_juez(){
    return juez.get_FechaNac();
}

string PARTIDO::get_mail_juez(){
    return juez.get_mail();
}

string PARTIDO::get_nacionalidad_juez(){
    return juez.get_nacionalidad();
}

long long int PARTIDO::get_sueldo_juez(){
    return juez.get_sueldo();
}

TARJETA PARTIDO::get_tarjetas_juez(){
    return juez.get_tarjetas();
}

int PARTIDO::get_partidos_juez(){
    return juez.get_partidos();

}

RUT PARTIDO::get_rut_juez(){
    return juez.get_rut();
}

PARTIDO::~PARTIDO(){
}
