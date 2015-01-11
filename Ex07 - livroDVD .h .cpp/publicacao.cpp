#include "publicacao.h"
#include <iostream>

using namespace std;

        void publicacao::GetData()
        {
            cout << "\nDigite o titulo: "; fflush(stdin); getline(cin,title);
            cout << "Digite o preco: "; cin >> price;
        }
        void publicacao::DisplayData() 
        {
            cout << "\nTitulo: " << title;
            cout << "\nPreco: " << price;
        }
