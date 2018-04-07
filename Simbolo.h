//simbolo .h
#ifndef SIMBOLO_H
#define SIMBOLO_H

class Simbolo{
    private:
        Simbolo* segundo;
        char caracter;
    public:
        Simbolo(char); 
        char getCaracter();
        void setCaracter(char);
        void setSegundo(Simbolo*);
        Simbolo* getSegundo();
};

#endif
