/* 
 * File:   main.cpp
 * Author: Tauan
 *
 * Created on September 3, 2013, 12:09 AM
 */
#include <iostream>
#include <cstdlib>
#include "Complex.h"

using namespace std;

int main() {
    Complex a,b,c;
    
    a.set(1,2);
    std::cout<<"Primeiro numero: "<<std::endl;
    a.imprime();
    b.set(1,2);
    std::cout<<"Segundo numero: "<<std::endl;
    b.imprime();
    c=a+b;
    std::cout<<"Soma: "<<std::endl;
    c.imprime();
    c=a-b;
    std::cout<<"Subtracao: "<<std::endl;
    c.imprime();
    if(a==b) std::cout<<"Sao iguais"<<std::endl;
    else std::cout<<"Sao diferentes"<<std::endl;
    
    c=a*b;
    std::cout<<"Multiplicacao: "<<std::endl;
    c.imprime();
    
    c=a/b;
    std::cout<<"Divisao: "<<std::endl;
    c.imprime();
    
    return 0;
}

