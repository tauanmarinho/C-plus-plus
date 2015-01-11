#include <cstdlib>
#include <iostream>

using namespace std;
class retangulo{
           float altura;
           float largura;
    public:
           retangulo(float a, float b){
                       altura = a;
                       largura = b;
                       }
           retangulo(){
                       altura = 1;
                       largura = 1;
                       }
           void setAltura(float a){
                 altura = a;
                }
           void setLargura(float a){
                largura = a;
                }
           float calcper(){
               return (2*(altura + largura));      
           }
           ~retangulo(){}

};
       
int main()
{
    retangulo ret(2,4);
    float alt,larg;
    cout << "Digite a altura do retangulo " << endl;
    cin >> alt;
    ret.setAltura(alt);
    cout << "Digite a largura do retangulo " << endl;
    cin >> larg;
    ret.setLargura(larg);
    cout << "O perimetro do retangulo eh " << ret.calcper() << endl;
    system("PAUSE");
    return 0;
}


