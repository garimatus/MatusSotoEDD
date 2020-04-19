#include <iostream>
#include <string>
#include "Lista.h"
#include <stdlib.h>

#define MAX 24

using namespace std;

bool validar_rut(long int num){
    int i = 2,s = 0,mod,DV = num%10;
    long int aux = num/10;
    if(DV == 75 || DV == 107)
       DV = 10;
    while(aux>0){
        if(i == 8)
            i = 2;
        s+=(aux%10)*i;
        aux/=10;
        i++;
    }
    mod = s%11;
    s = 11 - mod;
    if(s == 11)
        s = 0;
    if(s == num%10)
        return true;
    else{
        cout << "El rut no es valido. " << endl;
        return false;
    }
}

bool validar_fecha(int dd,int mm,int aa){
    bool F = false;
    cout << dd << "/" << mm << "/" << aa << endl;
    if((mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 1) && (dd>0 && dd<32) && aa>1900)
        F = true;
    if((mm == 4 || mm == 6 || mm == 9 || mm == 11) && (dd>0 && dd<31) && aa>1900)
        F = true;
    if((mm == 2) && (dd>0 && dd<29) && (aa>1900 && aa%4!=0))
        F = true;
    if((mm == 2) && (dd>0 && dd<30) && (aa>1900 && aa%4==0))
        F = true;
    if(F == false)
        cout << "La fecha no es valida." << endl;
    return F;
}

void mas_participacion(LISTA L){
    string nombre;
    bool existe = false;
    int mundiales = 0;
    while(L != NULL){
        if ( L -> pais.get_mundiales() > mundiales){
            existe = true;
            nombre = L -> pais.get_nombre();
        }
        L = L -> sig;
    }
    if(existe == true)
        cout << "El pais con más participaciones en mundiales es :  " << nombre << endl;
    else
        cout << "La lista no contiene paises o ninguno ha clasificado antes a un mundial." << endl;
}

void get_goleador(LISTA L){
    JUGADOR aux;
    string nombre;
    bool existe = false;
    int i,goles = 0;
    while(L != NULL){
        for(i=0;i<MAX;i++){
            if(L -> pais.get_goles_jugador(i) > goles){
                existe = true;
                nombre = L -> pais.get_nombre();
                aux = L -> pais.get_jugador(i);
            }
        }
        L = L -> sig;
    }
    if(existe == true)
        cout << "El goleador del campeonato es : " << aux.get_nombre() << "de " << nombre << endl;
    else
        cout << "No hay jugadores en la lista o no se han hecho goles." << endl;
}

void menos_experiencia(LISTA L){
    TECNICO aux;
    int exp = L -> pais.get_experiencia_profe();
    bool existe = false;
    while(L != NULL){
        if(L -> pais.get_experiencia_profe() > exp){
            existe = true;
            aux = L -> pais.get_profe();
        }
        L = L -> sig;
    }
    if(existe == true)
        cout << "El tecnico con menos experiencia es : " << aux.get_nombre() << endl;
    else
        cout << "No hay tecnicos en la lista o todos son principiantes." << endl;
}

void partidos_pais(LISTA L){
    while(L != NULL){
        cout << "Pais : " << L -> pais.get_nombre() << ", Partdos jugados : " << L -> pais.get_ganados() + L -> pais.get_perdidos() + L -> pais.get_empatados() << endl;
        L = L -> sig;
    }
}

void podio(LISTA L){
    int pos1 = 0, pos2 = 0, pos3 = 0,aux;
    string oro = "sin asignar",plata = "sin asignar" ,bronce = "sin asignar";
    while(L != NULL){
        aux = L -> pais.get_ganados() - L -> pais.get_perdidos();
        if(aux > pos1){
            oro = L -> pais.get_nombre();
            plata = oro;
            bronce = plata;
            pos1 = aux;
            aux = 0;
        }
        if(aux > pos2){
            plata = L -> pais.get_nombre();
            bronce = plata;
            pos2 = aux;
            aux = 0;
        }
        if(aux > pos3){
            bronce =  L -> pais.get_nombre();
            pos3 = aux;
        }
        L = L -> sig;
    }
    cout << "1ero : " << oro << endl;
    cout << "2do : " << plata << endl;
    cout << "3ero : " << bronce << endl;
}

void mayor_menor(LISTA L){
    string nombre1 = "sin asignar",nombre2 = "sin asignar";
    int i = 0;
    if( L == NULL){
        system("CLS");
        cout << "La lista esta vacia." << endl;
    }
    else{
        FECHA mayor = L -> pais.get_FechaNac_jugador(i),menor = L -> pais.get_FechaNac_jugador(i);
        while(L != NULL){
            for(i=0;i<MAX;i++){
                if((L -> pais.get_FechaNac_jugador(i)).get_ano() <= mayor.get_ano() && (L -> pais.get_FechaNac_jugador(i)).get_mes() <= mayor.get_mes() && (L -> pais.get_FechaNac_jugador(i)).get_dia() < mayor.get_dia()){
                    mayor = L -> pais.get_FechaNac_jugador(i);
                    nombre1 = L -> pais.get_nombre_jugador(i);
                }
                if((L -> pais.get_FechaNac_jugador(i)).get_ano() >= menor.get_ano() && (L -> pais.get_FechaNac_jugador(i)).get_mes() >= menor.get_mes() && (L -> pais.get_FechaNac_jugador(i)).get_dia() > menor.get_dia()){
                    menor = (L -> pais.get_FechaNac_jugador(i));
                    nombre2 = L -> pais.get_nombre_jugador(i);
                }
            }
            L = L -> sig;
        }
        cout << "El jugador mas viejo es : " << nombre1 << endl;
        cout << "El jugador mas joven es : " << nombre2 << endl;
    }
}

void tarjetas_arbitro(MUNDIAL R2018){
    int i;
    for(i=0;i<64;i++){
            cout << "Nombre : " << R2018.get_Nombre_juez(i) << " ,Amarillas : " << (R2018.get_Tarjetas_juez(i)).get_amarillas() << " ,Rojas : " << (R2018.get_Tarjetas_juez(i)).get_rojas() << endl;
    }
}
