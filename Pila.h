//pila .h
#ifndef PILA_H
#define PILA_H

#include "Simbolo.h"

class Pila{
    private:
        Simbolo* primero;
    public:
        Pila();
        Simbolo* getPrimero();
        void push(char);
        Simbolo* pop();
        Simbolo* top();
        bool isEmpty();
};

#endif