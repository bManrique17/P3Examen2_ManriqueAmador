//simbolo .cpp
#include "Simbolo.h"
#include <string>
#include <iostream>

using namespace std;

Simbolo::Simbolo(char cc){    
    
    segundo = NULL;
    
    caracter = cc;
}

char Simbolo::getCaracter(){
    return caracter;
}

void Simbolo::setCaracter(char cc){
    caracter = cc;
}

Simbolo* Simbolo::getSegundo(){
    return segundo;
}

void Simbolo::setSegundo(Simbolo* ss){
    segundo = ss;
}