#include <iostream>
#include <string>
#include <stdlib.h>
#include "JUGADOR.h"
#include "TECNICO.h"
#include "PAIS.h"
#include "RUT.h"
#include "FECHA.h"
#include "TARJETA.h"
#include "MUNDIAL.h"
#include "Lista.h"
#include "Parte3.h"

#define MAX 1

using namespace std;

void almacenar_pais(LISTA &L,int &cont){
    bool dv = false;
    long int i,num;
    LISTA p;
    string nombre;
    p = new(nodo);
    system("CLS");
    cout << "codigo pais : ";
    cin >> nombre;
    p -> pais.set_codigo(nombre);
    cout << "nombre del pais : ";
    cin >> nombre;
    p -> pais.set_nombre_sede(nombre);
    cout << "continente : ";
    cin >> nombre;
    p -> pais.set_continente(nombre);
    while(dv == false){
        cout << "Rut del entrenador : ";
        cin >> num;
        dv = validar_rut(num);
    }
    p -> pais.set_rut_profe(num);
    cout << "Nombre tecnico : ";
    cin >> nombre;
    p -> pais.set_nombre_profe(nombre);
    cout << "Años de experiancia : ";
    cin >> num;
    p -> pais.set_experiencia_profe(num);
    cout << "Experiencia en mundial (no : 0),(si : 1) : ";
    cin >> num;
    p -> pais.set_mundial_profe(num);
    for(i=0;i<MAX;i++){
        cout << "NOMINA" << endl;
        dv = false;
        while(dv == false){
            cout << "Rut del jugador " << i+1 << " : ";
            cin >> num;
            dv = validar_rut(num);
        }
        p -> pais.set_rut_jugador(num,i);
        cout << "Nombre del jugador " << i+1 << " : ";
        cin >> nombre;
        p -> pais.set_nombre_jugador(nombre,i);
        cout << "Posicion del jugador : " << i+1 << " ";
        cin >> nombre;
        p -> pais.set_posicion_jugador(nombre,i);
        cout << "Titularidad (no : 0),(si : 1) : ";
        cin >> num;
        p -> pais.set_titularidad(num,i);
    }
    cout << "Numero de habitantes del pais : ";
    cin >> num;
    p -> pais.set_habitantes(num);
    cout << "KM de superficie : ";
    cin >> num;
    p -> pais.set_superficie(num);
    cout << "Numero de mundiales : ";
    cin >> num;
    p -> pais.set_mundiales(num);
    cout << "Idioma del pais : ";
    cin >> nombre;
    p -> pais.set_idioma(nombre);
    if(L == NULL){
        L = p;
        cont++;
    }
    else{
        p -> sig = L;
        L = p;
        cont++;
    }
}

void desplegar_pais(LISTA L){
    int i,existe = 0;
    string nombre;
    cout << "codigo o nombre pais : ";
    cin >> nombre;
    while(L != NULL){
        if((L -> pais.get_codigo()).compare(nombre) == 0 || (L -> pais.get_nombre()).compare(nombre) == 0){
            existe = 1;
            cout << "Pais : " << L -> pais.get_nombre() << endl;
            cout << "Continente : " << L -> pais.get_continente() << endl;
            cout << "Sede : " << L -> pais.get_sede() << endl;
            cout << "Habitantes : " << L -> pais.get_habitantes() << endl;
            cout << "Idioma : " << L -> pais.get_idioma() << endl;
            cout << "Superficie : " << L -> pais.get_superficie() << endl;
            cout << "No. de mundiales : " << L -> pais.get_mundiales() << endl;
            cout << "Tecnico : " << L -> pais.get_nombre_profe() << endl;
            cout << "Nomina : " << endl;
            for(i=0;i<1;i++)
                cout << i+1 << " " << L -> pais.get_nombre_jugador(i) << ", " << L -> pais.get_posicion(i) << endl;
            cout << "Partidos ganados : " << L -> pais.get_ganados() << endl;
            cout << "Partidos perdidos : " << L -> pais.get_perdidos() << endl;
            cout << "Partidos empatados : " << L -> pais.get_perdidos() << endl;
            system("PAUSE");
        }
        L = L -> sig;
    }
    if(existe == 0){
        system("CLS");
        cout << "La lista esta vacia o el pais no existe." << endl;
    }
}

void buscar_jugador(LISTA L){
    int i,existe = 0;
    long int num;
    cout << "Rut del jugador : ";
    cin >> num;
    while(L != NULL){
        for(i=0;i<22;i++){
            if((L -> pais.get_rut_jugador(i)).get_rut() == num){
                cout << "Jugador encontrado." << endl;
                cout << "nombre : " << L -> pais.get_nombre_jugador(i) << endl;
                cout << "Rut : " << (L -> pais.get_rut_jugador(i)).get_rut() << endl;
                cout << "posicion : " << L -> pais.get_posicion(i) << endl;
                cout << "Titularidad (no : 0),(si : 1) : " << L -> pais.get_titularidad(i) << endl;
                cout << "fecha de nacimiento : " << (L -> pais.get_FechaNac_jugador(i)).get_dia() << "/" << (L -> pais.get_FechaNac_jugador(i)).get_mes() << "/" << (L -> pais.get_FechaNac_jugador(i)).get_ano() << endl;
                cout << "nacionalidad : " << L -> pais.get_nacionalidad_jugador(i) << endl;
                cout << "sueldo : " << L -> pais.get_sueldo_jugador(i) << endl;
                cout << "faltas : " << L -> pais.get_faltas_jugador(i) << endl;
                cout << "Tarjetas amarillas : " << (L -> pais.get_tarjetas(i)).get_amarillas() << endl;
                cout << "Tarjtetas rojas : " << (L -> pais.get_tarjetas(i)).get_rojas() << endl;
            }
        }
        L = L -> sig;
    }
    if(existe == 0){
        system("CLS");
        cout << "La lista esta vacia o el jugador no existe." << endl;
    }
}

void buscar_tecnico(LISTA L){
    long int num,existe = 0;
    cout << "rut del tecnico : ";
    cin >> num;
    while(L != 0){
        if((L -> pais.get_rut_profe()).get_rut() == num){
            existe = 1;
            cout << "Tecnico encontrado." << endl;
            cout << "Nombre : " << L -> pais.get_nombre_profe() << endl;
            cout << "Fecha de nacimiento : " << (L-> pais.get_FechaNac_profe()).get_dia() << " / " << (L-> pais.get_FechaNac_profe()).get_mes() << " / " << (L-> pais.get_FechaNac_profe()).get_ano() << endl;
            cout << "Nacionalidad : " << L -> pais.get_nacionalidad_profe() << endl;
            cout << "sueldo : " << L -> pais.get_sueldo_profe() << endl;
            cout << "mail : " << L -> pais.get_mail_profe() << endl;
            cout << "Años de experiencia : " << L -> pais.get_experiencia_profe() << endl;
            cout << "Experiencia en mundiales : " << L -> pais.get_mundial_profe() << endl;
        }
        L = L -> sig;
    }
    if(existe == 0){
        system("CLS");
        cout << "El tecnico no existe o la lista esta vacia.\n" << endl;
    }
}

void actualizar_pais(LISTA &L){
    long int num, existe = 0;
    LISTA p = L;
    string nombre;
    cout << "Ingrese nombre o codigo del pais : ";
    cin >> nombre;
    while(p != NULL){
        if((p -> pais.get_nombre()).compare(nombre) == 0 || (p -> pais.get_codigo()).compare(nombre) == 0){
            cout << "Pais encontrado." << endl;
            p = new(nodo);
            cout << "codigo pais : ";
            cin >> nombre;
            p -> pais.set_codigo(nombre);
            cout << "nombre del pais : ";
            cin >> nombre;
            p -> pais.set_nombre_sede(nombre);
            cout << "continente : ";
            cin >> nombre;
            p -> pais.set_continente(nombre);
            cout << "Numero de habitantes : ";
            cin >> num;
            p -> pais.set_habitantes(num);
            cout << "KM de superficie : ";
            cin >> num;
            p -> pais.set_superficie(num);
            cout << "Numero de mundiales : ";
            cin >> num;
            p -> pais.set_mundiales(num);
            cout << "Idioma del pais : ";
            cin >> nombre;
            p -> pais.set_idioma(nombre);
            cout << "Partidos ganados : ";
            cin >> num;
            p -> pais.set_ganados(num);
            cout << "Partidos perdidos : ";
            cin >> num;
            p -> pais.set_perdidos(num);
            cout << "Partidos empatados : ";
            cin >> num;
            p -> pais.set_empatados(num);
        }
        p = p -> sig;
    }
    if (existe == 0){
        system("CLS");
        cout << "Lista esta vacia o el jugador no existe." << endl;
    }
}

void actualizar_jugador(LISTA &L){
    bool dv = false,f = false;
    int i,dia,mes,ano,a,r;
    string nombre;
    long long int num,existe = 0;
    LISTA p = L;
    cout << "Rut del jugador : ";
    cin >> num;
    while (p != NULL){
        for(i=0;i<22;i++){
            if(num == (p -> pais.get_rut_jugador(i)).get_rut()){
                existe = 1;
                cout << "Jugador encontrado." << endl;
                while(dv == false){
                    cout << "Rut del jugador : ";
                    cin >> num;
                    dv = validar_rut(num);
                }
                p -> pais.set_rut_jugador(num,i);
                cout << "Nombre del jugador : ";
                cin >> nombre;
                p -> pais.set_nombre_jugador(nombre,i);
                while(f == false){
                    cout << "Dia de nacimiento : ";
                    cin >> dia;
                    cout << "Mes : ";
                    cin >> mes;
                    cout << "Año : ";
                    cin >> ano;
                    f = validar_fecha(dia,mes,ano);
                }
                p -> pais.set_FechaNac_jugador(dia,mes,ano,i);
                cout << "Correo del jugador : ";
                cin >> nombre;
                p -> pais.set_mail_jugador(nombre,i);
                cout << "Nacionalidad : ";
                cin >> nombre;
                p -> pais.set_nacionalidad_jugador(nombre,i);
                cout << "sueldo : ";
                cin >> num;
                p -> pais.set_sueldo_jugador(num,i);
                cout << "Posicion : ";
                cin >> nombre;
                p -> pais.set_posicion_jugador(nombre,i);
                cout << "cantidad de goles en la competencia: ";
                cin >> num;
                p -> pais.set_goles_jugador(num,i);
                cout << "Titularidad (no : 0),(si : 1) : ";
                cin >> num;
                p -> pais.set_titularidad(num,i);
                cout << "cantidad de faltas : ";
                cin >> num;
                p -> pais.set_faltas_jugador(num,i);
                cout << "No. de tarjetas amarillas : ";
                cin >> a;
                cout << "No. de tarjetas rojas : ";
                cin >> r;
                p -> pais.set_tarjetas_jugador(a,r,i);
            }
        }
        p = p -> sig;
    }
    if(existe == 0){
        system("CLS");
        cout << "La lista esta vacia o el jugador no existe." << endl;
    }
}

void actualizar_tecnico(LISTA &L){
    bool dv = false,f = false;
    LISTA p = L;
    int dia,mes,ano,existe = 0;
    long long int num;
    string nombre;
    cout << "Rut del tecnico : ";
    cin >> num;
    while(p != NULL){
        if((p -> pais.get_rut_profe()).get_rut() == num){
            existe = 1;
                while(dv == false){
                    cout << "Rut del tecnico : ";
                    cin >> num;
                    dv = validar_rut(num);
                }
                p -> pais.set_rut_profe(num);
                cout << "Nombre del tecnico : ";
                cin >> nombre;
                p -> pais.set_nombre_profe(nombre);
                while(f == false){
                    cout << "Dia de nacimiento : ";
                    cin >> dia;
                    cout << "Mes : ";
                    cin >> mes;
                    cout << "Año : ";
                    cin >> ano;
                    f = validar_fecha(dia,mes,ano);
                }
                p -> pais.set_FechaNac_profe(dia,mes,ano);
                cout << "Correo del tecnico : ";
                cin >> nombre;
                p -> pais.set_mail_profe(nombre);
                cout << "Nacionalidad : ";
                cin >> nombre;
                p -> pais.set_nacionalidad_profe(nombre);
                cout << "sueldo : ";
                cin >> num;
                p -> pais.set_sueldo_profe(num);
                cout << "Años de experiencia : ";
                cin >> num;
                p -> pais.set_experiencia_profe(num);
                cout << "Experiencia en mundial (no : 0),(si : 1) : ";
                cin >> num;
                p -> pais.set_mundial_profe(num);
        }
    }
    if (existe == 0){
        system("CLS");
        cout << "El tecnico no existe o la lista esta vacia.";
    }
}

void actualizar_partido(MUNDIAL R2018,LISTA L,int &cont){
    bool f = false;
    int dia,mes,ano,goles,existe = 0;
    long int num;
    string nombre;
    LISTA p;
    if(cont == 63)
        cont == 0;
    cout << "Codigo del partido : ";
    cin >> nombre;
    R2018.set_codigo_partido(nombre,cont);
    while(existe == 0){
        p = L;
        cout << "Codigo o nombre del pais visitante : ";
        cin >> nombre;
        while(p != NULL){
            if((p -> pais.get_nombre() == nombre || p -> pais.get_codigo() == nombre) && (p -> pais.get_nombre() != "rusia")){
                existe = 1;
                R2018.set_visita(p -> pais,cont);
            }
            p = p -> sig;
        }
        if(existe == 0)
            cout << "El pais no se encuentra en la lista de paises.\n";
    }
    existe = 0;
    while(existe == 0){
        p = L;
        cout << "Codigo o nombre del pais local : ";
        cin >> nombre;
        while(p != NULL){
            if((p -> pais.get_nombre() == nombre || p -> pais.get_codigo() == nombre) && (p -> pais.get_nombre() == "rusia")){
                existe = 1;
                R2018.set_local(p -> pais,cont);
            }
            p = p -> sig;
        }
        if(existe == 0)
            cout << "El pais no se encuentra en la lista de paises.\n";
    }
    while(f == false){
        cout << "Dia : ";
        cin >> dia;
        cout << "Mes : ";
        cin >> mes;
        cout << "Año : ";
        cin >> ano;
        f = validar_fecha(dia,mes,ano);
    }
    R2018.set_fecha_partido(dia,mes,ano,cont);
    cout << "Rut del arbitro : ";
    cin >> num;
    R2018.set_Rut_juez(num,cont);
    cout << "Nacionalidad : ";
    cin >> nombre;
    R2018.set_Nacionalidad_juez(nombre,cont);
    cout << "Nombre del arbitro : ";
    cin >> nombre;
    R2018.set_Nombre_juez(nombre,cont);
    cout << "goles del visitante : ";
    cin >> goles;
    R2018.set_goles_visita(goles,cont);
    cout << "goles del local : ";
    cin >> goles;
    R2018.set_goles_local(goles,cont);
    cont++;
}

void actualizar_arbitro(MUNDIAL R2018){
    bool dv = false,f = false;
    int amarillas,rojas,i,dia,mes,ano,existe = 0;
    long long int num;
    string nombre;
    cout << "Rut del arbitro : ";
    cin >> num;
    for(i=0;i<64;i++){
        if((R2018.get_Rut_juez(i)).get_rut() == num){
            cout << "Arbitro encontrado." << endl;
            while( dv == false){
                cout << "Rut del arbitro : ";
                cin >> num;
                dv = validar_rut(num);
            }
            R2018.set_Rut_juez(num,i);
            cout << "Nombre del arbitro : ";
            cin >> nombre;
            R2018.set_Nombre_juez(nombre,i);
            while(f == false){
                cout << "Dia de nacimiento";
                cin >> dia;
                cout << "Mes : ";
                cin >> mes;
                cout << "Año : ";
                cin >> ano;
                f = validar_fecha(dia,mes,ano);
            }
            R2018.set_FechaNac_juez(dia,mes,ano,i);
            cout << "correo : ";
            cin >> nombre;
            R2018.set_Mail_juez(nombre,i);
            cout << "Nacionalidad : ";
            cin >> nombre;
            R2018.set_Nacionalidad_juez(nombre,i);
            cout<< "sueldo : ";
            R2018.set_Sueldo_juez(num,i);
            cout << "Tarjetas amarillas sacadas : ";
            cin >> amarillas;
            cout << "Tarjetas rojas sacadas : ";
            cin >> rojas;
            R2018.set_Tarjetas_juez(amarillas,rojas,i);
            cout << "Partidos arbitrados : ";
            cin >> num;
            R2018.set_Partidos_juez(num,i);
        }
    }
    if(existe == 0){
        system("CLS");
        cout << "El arbitro no existe." << endl;
    }
}

void desplegar_partido(MUNDIAL R2018){
    int i,existe = 0;
    PARTIDO partido;
    string nombre;
    cout << "Codigo del partido : ";
    cin >> nombre;
    for(i=0;i<64;i++){
        if(R2018.get_codigo_partido(i) == nombre){
            existe = 1;
            partido = R2018.get_partido(i);
            cout << "Visita : " << partido.get_nombre_visita() << endl;
            cout << "Local : " << partido.get_nombre_local() << endl;
            cout << "Fecha : " << (partido.get_fecha()).get_dia() << " / " << (partido.get_fecha()).get_mes() << " / " << (partido.get_fecha()).get_ano() << endl;
            cout << "goles del visitante : " << partido.get_goles_visita() << endl;
            cout << "goles del local : " << partido.get_goles_local() << endl;
        }
    }
    if(existe == 0){
        system("CLS");
        cout << "El partido no existe." << endl;
    }
}

void buscar_arbitro(MUNDIAL R2018){
    int i,existe = 0;
    long int num;
    cout << "Rut del arbitro : ";
    cin >> num;
    for(i=0;i<64;i++){
        if((R2018.get_Rut_juez(i)).get_rut() == num)
            existe = 1;
            cout << "Arbitro encontrado." << endl;
            cout << "Nombre : " << R2018.get_Nombre_juez(i) << endl;
            cout << "Fecha de nacimiento : " << (R2018.get_FechaNac_juez(i)).get_dia() << " / " << (R2018.get_FechaNac_juez(i)).get_mes() << " / " << (R2018.get_FechaNac_juez(i)).get_ano() << endl;
            cout << "correo : " << R2018.get_Mail_juez(i) << endl;
            cout << "Nacionalidad : " << R2018.get_Nacionalidad_juez(i) << endl;
            cout << "sueldo : " << R2018.get_Sueldo_juez(i) << endl;
            cout << "Tarjetas amarillas sacadas : " << (R2018.get_Tarjetas_juez(i)).get_amarillas() << endl;
            cout << "Tarjetas rojas sacadas : " << (R2018.get_Tarjetas_juez(i)).get_rojas() << endl;
            cout << "Experiencia : " << R2018.get_Partidos_juez(i) << endl;
    }
    if(existe == 0){
        system("CLS");
        cout << "El arbitro no existe." << endl;
    }
}

void eliminar_pais(LISTA &L, int &cont){
    int existe = 0;
    string nombre;
    LISTA p = L,q = NULL;
    cout << "nombre o codigo del pais : ";
    cin >> nombre;
    while(p != NULL){
        if((p -> pais.get_nombre() == nombre || p -> pais.get_codigo() == nombre) && p -> pais.get_ganados() == 0){
            existe = 1;
            if(q == NULL){
                L = p -> sig;
                delete(p);
                system("CLS");
                cout << "Pais eliminado." << endl;
                cont--;
                system("PAUSE");
            }
            else{
                q -> sig = p -> sig;
                delete(p);
                system("CLS");
                cout << "Pais eliminado." << endl;
                cont--;
                system("PAUSE");
            }
        }
        q = p;
        p = p -> sig;
    }
    if(existe == 0){
        system("CLS");
        cout << "No se ha encontrado pais que pueda ser eliminado." << endl;
    }
}


int main(){
    char o;
    int paises = 0,partidos = 0;
    LISTA L = NULL;
    MUNDIAL Rusia2018;
    cout << "Mundial Rusia 2018 creado." << endl;
    do{

        cout << "Paises : " << paises << endl;
        cout << "a) Agregar pais.\nb) Desplegar informacion de pais.\nc) Desplegar informacion de jugador.\nd) Desplegar informacion de tecnico.\ne) Actualizar informacion de pais.\nf) Actualizar informacion de jugador.\ng) Arreglar o actualizar partido.\nh) Actualizar informacion de arbitro.\ni) Desplegar informacion de partido.\nj) Desplegar informacion de arbitro.\nk) Eliminar pais.\nl) Mostrar el pais con mas participaciones en mundiales.\nm) Mostrar goleador del torneo.\nn) Mostrar el tecnico menos experimentado.\no) Mostrar cantidad de partidos jugados por pais.\np) Mostrar tres primeros lugares.\nq) Mostrar al jugador mas viejo y joven.\nr) Tarjetas mostradas por cada arbitro.\nIngresar opcion : ";
        cin >> o;
        switch (o){
            case 'a' :
                if(paises == MAX){
                    system("CLS");
                    cout << "La lista de paises ya contiene el maximo para la competencia." << endl;
                    break;
                }
                else{
                    almacenar_pais(L,paises);
                    break;
                }
            case 'b' :
                desplegar_pais(L);
                break;
            case 'c' :
                buscar_jugador(L);
                break;
            case 'd' :
                actualizar_tecnico(L);
                break;
            case 'e' :
                actualizar_pais(L);
                break;
            case 'f' :
                actualizar_jugador(L);
                break;
            case 'g' :
                actualizar_partido(Rusia2018,L,partidos);
                break;
            case 'h' :
                actualizar_arbitro(Rusia2018);
                break;
            case 'i' :
                desplegar_partido(Rusia2018);
                break;
            case 'j' :
                buscar_arbitro(Rusia2018);
                break;
            case 'k' :
                eliminar_pais(L,paises);
                break;
            case 'l' :
                mas_participacion(L);
                break;
            case 'm' :
                get_goleador(L);
                break;
            case 'n' :
                menos_experiencia(L);
                break;
            case 'o' :
                partidos_pais(L);
                break;
            case 'p' :
                podio(L);
                break;
            case 'q' :
                mayor_menor(L);
                break;
            case 'r' :
                tarjetas_arbitro(Rusia2018);
                break;
            default :
                system("CLS");
                cout << "La opcion ingresada no existe." << endl;
        }
    }while(o != 'l');
    return 0;
}
