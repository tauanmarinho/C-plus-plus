#include "dvd.h"
#include <iostream>

using namespace std;

void dvd::GetData()
        {
            publicacao::GetData();
            cout << "Digite o tempo total: "; cin >> time;
            vendas::GetData();
}

void dvd::DisplayData() 
{
            publicacao::DisplayData();
            cout << "\nTempo total: " << time;
            vendas::DisplayData();
}

