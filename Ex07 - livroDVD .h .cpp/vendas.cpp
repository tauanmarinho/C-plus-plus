#include "vendas.h"
#include <iostream>


using namespace std;

void vendas::GetData()
{
    cout << "Digite as vendas nos 3 ultimos meses\n";
    for(int j=0; j<MONTHS; j++)
    {
        cout << " Mes " << j+1 << ": ";
        cin >> salesArr[j];
    }
}
//--------------------------------------------------------------
void vendas::DisplayData() 
{
    for(int j=0; j<MONTHS; j++)
    {
        cout << "\n Vendas no mes " << j+1 << ": ";
        cout << salesArr[j];
    }
}
