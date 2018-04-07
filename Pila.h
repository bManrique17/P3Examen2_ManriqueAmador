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
        void top(char);
        void isEmpty(char);
};

#endif