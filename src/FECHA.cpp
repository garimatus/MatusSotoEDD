#include "FECHA.h"

FECHA::FECHA(){
    dd = 0;
    mm = 0;
    aa = 0;
}

void FECHA::set_fecha(int d,int m,int a){
    dd = d;
    mm = m;
    aa = a;
}

int FECHA::get_dia(){
    return dd;
}

int FECHA::get_mes(){
    return mm;
}

int FECHA::get_ano(){
    return aa;
}

FECHA::~FECHA(){
}
