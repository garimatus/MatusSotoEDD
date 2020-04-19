#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "JUGADOR.h"
#include "TECNICO.h"
#include "PAIS.h"
#include "RUT.h"
#include "FECHA.h"
#include "TARJETA.h"
#include "MUNDIAL.h"


typedef struct nodo{
    PAIS pais;
    struct nodo *sig;
};

typedef nodo *LISTA;

#endif // LISTA_H_INCLUDED
