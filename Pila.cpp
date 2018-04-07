//pila.cpp
#include "Pila.h"
#include <string>
#include <iostream>

using namespace std;

Pila::Pila(){
    primero = NULL;
}

void Pila::push(char cc){    
    if(primero == NULL)
        primero = new Simbolo(cc);
    else{
        Simbolo* b = new Simbolo(cc);        
        b->setSegundo(primero);
        primero = b;
    }   
}

Simbolo* Pila::pop(){
    Simbolo* temp = primero;    
    primero = primero->getSegundo();
    return temp;        
}

Simbolo* Pila::top(){
    return primero;
}

bool Pila::isEmpty(){
    if(primero==NULL)
        return true;
    else   
        return false;
}

Simbolo* Pila::getPrimero(){
    return primero;
}


