#include "PAIS.h"

using namespace std;

PAIS::PAIS(){
    partidos_ganados = 0;
    partidos_perdidos = 0;
    partidos_empatados = 0;
}

void PAIS::set_codigo(string nom){
    codigo = nom;
}


void PAIS::set_continente(string nom){
    continente = nom;
}

void PAIS::set_rut_profe(long int R){
    profe.set_rut(R);
}

void PAIS::set_nombre_profe(string nom){
    profe.set_nombre(nom);
}

void PAIS::set_rut_jugador(long int R,int num){
    jugadores[num].set_rut(R);
}

void PAIS::set_nombre_jugador(string nom,int num){
    jugadores[num].set_nombre(nom);
}

void PAIS::set_posicion_jugador(string nom,int num){
    jugadores[num].set_posicion(nom);
}

void PAIS::set_habitantes(long int num){
    habitantes = num;
}

void PAIS::set_superficie(long int num){
    superficie = num;
}

void PAIS::set_mundiales(long int num){
    mundiales = num;
}

void PAIS::set_nombre_sede(string nom){
        int l;
        for(l=0;l<nom.length();l++)
            nom[l] = tolower(nom[l]);
        nombre = nom;
        if(nombre.compare("rusia") == 0 || nombre.compare("russia") == 0 || nombre.compare("Россия") == 0)
            sede = true;
        else
            sede = false;
}

void PAIS::set_idioma(string nom){
    idioma = nom;
}

void PAIS::set_titularidad(bool T,int num){
    jugadores[num].set_titularidad(T);
}

string PAIS::get_nombre(){
    return nombre;
}

TECNICO PAIS::get_profe(){
    return profe;
}

string PAIS::get_nombre_profe(){
    return profe.get_nombre();
}

string PAIS::get_nombre_jugador(int num){
        return jugadores[num].get_nombre();
}

RUT PAIS::get_rut_profe(){
    return profe.get_rut();
}

RUT PAIS::get_rut_jugador(int num){
    return jugadores[num].get_Rut();
}

JUGADOR PAIS::get_jugador(int num){
        return jugadores[num];
}

string PAIS::get_codigo(){
    return codigo;
}

bool PAIS::get_sede(){
    return sede;
}

string PAIS::get_posicion(int num){
    return jugadores[num].get_posicion();
}

string PAIS::get_continente(){
    return continente;
}

long int PAIS::get_habitantes(){
    return habitantes;
}

long int PAIS::get_superficie(){
    return superficie;
}

int PAIS::get_mundiales(){
    return mundiales;
}

string PAIS::get_idioma(){
    return idioma;
}

FECHA PAIS::get_FechaNac_jugador(int num){
    return jugadores[num].get_FechaNac();
}

string PAIS::get_nacionalidad_jugador(int num){
    return jugadores[num].get_nacionalidad();
}

int PAIS::get_ganados(){
    return partidos_ganados;
}

int PAIS::get_perdidos(){
    return partidos_perdidos;
}

int PAIS::get_empatados(){
    return partidos_empatados;
}

long long int PAIS::get_sueldo_jugador(int num){
    return jugadores[num].get_sueldo();
}

int PAIS::get_faltas_jugador(int num){
    return jugadores[num].get_faltas();
}

TARJETA PAIS::get_tarjetas(int num){
    return jugadores[num].get_tarjetas();
}

bool PAIS::get_titularidad(int num){
    return jugadores[num].get_titularidad();
}

void PAIS::set_experiencia_profe(int num){
    profe.set_experiencia(num);
}

void PAIS::set_mundial_profe(bool exp){
    profe.set_mundial(exp);
}

void PAIS::set_ganados(long int num){
    partidos_ganados = num;
}

void PAIS::set_perdidos(long int num){
    partidos_perdidos = num;
}

void PAIS::set_empatados(long int num){
    partidos_empatados = num;
}

void PAIS::set_nacionalidad_jugador(string nom,int num){
    jugadores[num].set_nacionalidad(nom);
}

void PAIS::set_mail_jugador(string nom,int num){
    jugadores[num].set_mail(nom);
}

void PAIS::set_sueldo_jugador(long long int P,int num){
    jugadores[num].set_sueldo(P);
}

void PAIS::set_FechaNac_jugador(int dd,int mm,int aa,int num){
    jugadores[num].set_FechaNac(aa,dd,mm);
}

void PAIS::set_faltas_jugador(long long int I,int num){
    jugadores[num].set_faltas(I);
}

void PAIS::set_tarjetas_jugador(int A,int R,int num){
    jugadores[num].set_tarjetas(A,R);
}

void PAIS::set_goles_jugador(int G,int num){
    jugadores[num].set_goles(G);
}

FECHA PAIS::get_FechaNac_profe(){
    return profe.get_FechaNac();
}

bool PAIS::get_mundial_profe(){
    return profe.get_mundial();
}

int PAIS::get_experiencia_profe(){
    return profe.get_experiencia();
}

string PAIS::get_nacionalidad_profe(){
    return profe.get_nacionalidad();
}

void PAIS::set_FechaNac_profe(int dd,int mm,int aa){
    profe.set_FechaNac(dd,mm,aa);
}

void PAIS::set_mail_profe(string nom){
    profe.set_mail(nom);
}

void PAIS::set_nacionalidad_profe(string nom){
    profe.set_nacionalidad(nom);
}

void PAIS::set_sueldo_profe(long long int P){
    profe.set_sueldo(P);
}

string PAIS::get_mail_profe(){
    return profe.get_mail();
}

long long int PAIS::get_sueldo_profe(){
    return profe.get_sueldo();
}

int PAIS::get_goles_jugador(int num){
    return jugadores[num].get_goles();
}

PAIS::~PAIS(){
}
