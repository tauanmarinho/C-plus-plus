/* 
 * File:   main.cpp
 * Author: Tauan
 *
 * Created on July 31, 2013, 10:28 PM
 */

#include <cstdlib>
#include <string.h>
#include <iostream>

using namespace std;

class Figura{
public:
    Figura(){}
    virtual void Print(){
        cout<<"Sou uma figura!"<<endl;
    }
};
class FigRetangulo: public Figura
{
public:
    FigRetangulo():Figura(){}
    void Print(){
        cout<<"Sou um retangulo!"<<endl;
    } 
};
class FigCirculo: public Figura
{
        public:
            FigCirculo():Figura(){}
            void Print(){
                cout<<"Sou um circulo!"<<endl;
            }
};
int main() {

    Figura *retangulo;
    retangulo = new FigRetangulo;
    
    Figura *circulo;
    circulo = new FigCirculo;
    
    
    retangulo->Print();
    circulo->Print();
    
    return 0;
}