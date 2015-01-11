// utilizando classes para modelar um pedágio
#include <iostream>
using namespace std;
#include <conio.h>
#include <locale.h>
//const char ESC = 27; //código ASCII da tecla Esc
const double TARIFA = 1.5; //valor da tarifa
////////////////////////////////////////////////////////////////
class pedagio
{
            int totalCars; //total de carros
            double totalCash; //total de dinheiro
      public: 
            pedagio()  //construtor
            { totalCars=0; totalCash=0.0;}
            pedagio(int a, double b)  //construtor
            { totalCars=a; totalCash=b;}
            void payingCar() //carro pagou
            { totalCars++; totalCash += TARIFA; }
            void nopayCar() //carro não pagou
            { totalCars++; }
            void display() //mostra o total
            { cout << "\nCarros = " << totalCars
                   << ", Dinheiro = R$ " << totalCash
                   << endl; }
            ~pedagio(){}//destruidor
};

////////////////////////////////////////////////////////////////
int main()
{
    setlocale(LC_ALL, "Portuguese");
    pedagio ped1, ped2; //cria um objeto da classe pedagio
    char ch;
    cout << "\nAperte: \n"
         << "\n0 para cada carro não pagante,"
         << "\n1 para cada carro pagante,"
         << "\nEsc para sair do programa.\n";
    do {
            ch = getche(); //recebe um caracter, deixando "rastro"
            if( ch == '0' ) //se for 0, carro não pagou
                ped1.nopayCar();
            if( ch == '1' ) //se for 1, carro pagou
                ped1.payingCar();
        } while( ch != 27 ); //sai do loop com a tecla Esc
    ped1.display(); //mostra o total na tela
    system("pause");
    return 0;
}
