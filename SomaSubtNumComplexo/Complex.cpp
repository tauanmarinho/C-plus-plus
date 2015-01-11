/* 
 * File:   Complex.cpp
 * Author: Tauan
 * 
 * Created on September 3, 2013, 12:10 AM
 */

#include <iostream>

#include "Complex.h"

Complex::Complex() {
}

Complex::~Complex() {
}

void Complex::imprime(){std::cout<<real<<" + "<<imag<<"i"<<std::endl;}

void Complex::set(double r, double i){real=r; imag=i;}

Complex Complex::operator +(Complex b){
    Complex c;
    
    c.real=b.real+real;
    c.imag=b.imag+imag;
    return c;
}

Complex Complex::operator -(Complex b){
    Complex c;
    c.real=real-b.real;
    c.imag=imag-b.imag;
    return c;
}

bool Complex::operator ==(Complex b){
    bool saida = false;
    if(b.imag==imag&&b.real==real) saida=true;
    return saida;
    
}

Complex Complex::operator *(Complex b){
    Complex c;
    
    c.real=(real*b.real)-(imag*b.imag);
    c.imag=(imag*b.real)+(b.imag*real);
    return c;
}

Complex Complex::operator /(Complex b){
    Complex c, d, e;
    
    d.real= (real*b.real)+(b.imag*imag);//parte de cima real
    d.imag=(b.imag*real)-(imag*b.real);// parte de cima imag
    e.real=(real*real)+(imag*imag);//parte de baixo
    c.real=d.real/e.real;
    c.imag=d.imag/e.real;
    return c;
}
