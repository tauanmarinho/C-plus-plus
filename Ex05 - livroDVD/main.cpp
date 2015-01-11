// classe publicacao e classes derivadas (herança)
#include <iostream>
#include <string>
using namespace std;
////////////////////////////////////////////////////////////////
class publicacao // classe base
{
        string title;
        float price;
    public:
           publicacao(){}
        void GetData()
        {
            cout << "\nDigite o titulo: "; fflush(stdin); getline(cin, title);
            cout << "Digite o preco: "; cin >> price;
        }
        void DisplayData() 
        {
            cout << "\n\nTitulo: " << title;
            cout << "\nPreco: " << price;
        }
};
////////////////////////////////////////////////////////////////
class livro : public publicacao // classe derivada
{
    private:
        int pages;
    public:
        void GetData()
        {
            publicacao::GetData();
            cout << "Digite o numero de paginas: "; cin >> pages;
        }
        void DisplayData() 
        {
            publicacao::DisplayData();
            cout << "\nPaginas: " << pages;
        }
};
////////////////////////////////////////////////////////////////
class dvd : public publicacao // classe derivada
{
    private:
        float time;
    public:
        void GetData()
        {
            publicacao::GetData();
            cout << "Digite o tempo total: "; cin >> time;
        }
        void DisplayData() 
        {
            publicacao::DisplayData();
            cout << "\nTempo total: " << time;
        }
};
////////////////////////////////////////////////////////////////
int main()
{
    livro livro1; 
    dvd dvd1;
    livro1.GetData(); // recebe os dados
    dvd1.GetData();
    livro1.DisplayData(); // mostra os dados
    dvd1.DisplayData();
    cout << endl; cout << endl;
    system("pause");
    return 0;
}
