#include "TARJETA.h"

TARJETA::TARJETA(){
    rojas = 0;
    amarillas = 0;
}

void TARJETA::set_tarjetas(int A,int R){
    amarillas = A;
    rojas = R;
}

int TARJETA::get_amarillas(){
    return amarillas;
}

int TARJETA::get_rojas(){
    return rojas;
}

TARJETA::~TARJETA(){
}
