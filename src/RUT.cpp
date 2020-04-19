#include "RUT.h"

RUT::RUT(){
    rut = 0;
    dv = 0;
}

long int RUT::get_rut(){
     return rut;
}

char RUT::get_dv(){
    return dv;
}

void RUT::set_rut(long int R){
    rut = R;
}

RUT::~RUT(){
}
