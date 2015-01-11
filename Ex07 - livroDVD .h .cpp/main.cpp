#include <iostream>
#include <cstdlib>
#include "livro.h"
#include "dvd.h"

int main()
{
    livro livro1; 
    dvd dvd1;
    
    livro1.GetData(); // recebe os dados
    dvd1.GetData();
    
    livro1.DisplayData(); // mostra os dados
    dvd1.DisplayData();
    
    cout << "\n\n";
    system("pause");
    return 0;
}
