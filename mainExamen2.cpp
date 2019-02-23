#include <string>
#include <iostream>
#include "Simbolo.h"
#include "Pila.h"
#include <stdlib.h>
#include <sstream>
#include <vector>

using namespace std;
//holas
int evaluar(Pila*,int);
vector <string> listaSimbolos;

int main(){
    cout<<"EXAMEN 2 Manrique Amador"<<endl;
    char r;
    
    do{
        Pila* pila = new Pila();
        cout<<"->Ingrese su operacion: ";
        string operacion;
        cin>>operacion;

        for(int i = 0 ; i<operacion.size() ; i++){
            pila->push(operacion[i]);
        }
 
        int res = evaluar(pila,operacion.size());
        cout<<"Resultado: "<<res<<endl;;
        cout<<"\nDesea continuar [s/n]: ";
        cin>>r;
    }while(r=='S' || r=='s');
}

int evaluar(Pila* pila,int tamano){    
    
    char operacion = '_';
    int resultado=1, tempNum1=0;
    char nombreNuevo;
    bool senuelo = false,bandera2 = false;
    for(int i=0 ; i<tamano ; i++){                
        char temp = pila->getPrimero()->getCaracter();
        switch(temp){
            case '=':
                cout<<"CC arriba: "<<temp<<endl;
                senuelo = true;                                
            case '+':                            
            case '-':                 
            case '*':                            
            case '/':                
                operacion = pila->getPrimero()->getCaracter();
                pila->pop();
                break;
            default:  
                if(!senuelo){     
                    bool bandera = true;                  
                    stringstream acum;
                    string valor;
                    char cc = temp;
                    for(int j=0 ; j<listaSimbolos.size() ; j++){
                        if(cc==((string)listaSimbolos[i])[0]){
                            acum<<((string)listaSimbolos[i])[2];
                            acum>>valor;
                            cout<<"VALOR: "<<valor<<endl;
                            tempNum1 = atoi(valor.c_str());        
                            bandera = false;
                            break;
                        }
                    }                    
                    if(bandera){
                        acum<<cc;
                        acum>>valor;
                        tempNum1 = atoi(valor.c_str());                        
                    }                                        
                    pila->pop();
                }else{                                       
                    nombreNuevo=pila->getPrimero()->getCaracter();                                                                                 
                }                
                break;
        }                
        if(!senuelo){
            switch(operacion){            
                case '+':
                    resultado+=tempNum1;
                    if(i!=(tamano-2))
                        operacion='_';                
                    break;            
                case '-':        
                    resultado-=tempNum1;
                    if(i!=(tamano-2))
                        operacion='_';                
                    break;            
                case '*':     
                    resultado*=tempNum1;       
                    if(i!=(tamano-2))
                        operacion='_';                
                    break;            
                case '/':
                    resultado/=tempNum1;
                    if(i!=(tamano-2))
                        operacion='_';                
                    break;            
            }
        }else{
            switch(operacion){            
                case '+':
                    resultado+=tempNum1;
                    if(i!=(tamano-4))
                        operacion='_';                
                    break;            
                case '-':        
                    resultado-=tempNum1;
                    if(i!=(tamano-4))
                        operacion='_';                
                    break;            
                case '*':     
                    resultado*=tempNum1;       
                    if(i!=(tamano-4))
                        operacion='_';                
                    break;            
                case '/':
                    resultado/=tempNum1;
                    if(i!=(tamano-4))
                        operacion='_';                
                    break;            
            }
        }            
        
    }    
    //if(!senuelo){
    switch(operacion){            
        case '+':
            resultado+=tempNum1;            
            break;            
        case '-':        
            resultado-=tempNum1;            
            break;            
        case '*':     
            resultado*=tempNum1;                   
            break;            
        case '/':
            resultado/=tempNum1;            
            break;            
    } 
    //}else{
    if(senuelo){
        stringstream acum;
        string valor;
        acum<<nombreNuevo<<","<<resultado;
        acum>>valor;
        listaSimbolos.push_back(valor);
    }
    return resultado;
}
