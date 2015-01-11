#include "livro.h"
#include <iostream>


using namespace std;

 void livro::GetData()
        {
            publicacao::GetData();
            cout << "Digite o numero de paginas: "; cin >> pages;
            vendas::GetData();
        }
        
 void livro::DisplayData() 
        {
            publicacao::DisplayData();
            cout << "\nPaginas: " << pages;
            vendas::DisplayData();
        }
