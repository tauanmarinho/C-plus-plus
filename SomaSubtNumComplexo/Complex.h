/* 
 * File:   Complex.h
 * Author: Tauan
 *
 * Created on September 3, 2013, 12:10 AM
 */

#ifndef COMPLEX_H
#define	COMPLEX_H

class Complex {
private:
    double real;
    double imag;
public:
    Complex();
    ~Complex();
    
    void imprime();
    
    void set(double,double);
    
    Complex operator+(Complex);
    
    Complex operator-(Complex);
    
    bool operator==(Complex);

    Complex operator*(Complex);
    
    Complex operator/(Complex);

};

#endif	/* COMPLEX_H */

