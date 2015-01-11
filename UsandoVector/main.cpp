/* 
 * File:   main.cpp
 * Author: Tauan
 *
 * Created on August 1, 2013, 10:58 AM
 */

#include <cstdlib>
#include <iostream>
#include <vector>//muito parecido com Vetor, mas com uma mobilidade maior

using namespace std;


int main() {

    vector<int> MeuVector;//dando nome a um vector
    int i;
   
    MeuVector.push_back(30);//inserir os valores
    MeuVector.push_back(31);
    MeuVector.push_back(33);
    MeuVector.push_back(20);
    MeuVector.push_back(0);
    
    for(i = 0; i < MeuVector.size() ; i++)
    {
    cout<<MeuVector.at(i)<<" ";//pritando os vectores
    }
   
    
    cout<<endl;//--------------------------------------------------------
    
    
    MeuVector.insert(MeuVector.begin(), 5);//adiciona o numero 5 no começo
    MeuVector.insert(MeuVector.begin()+2, 10);//adiciona o numero 10 depois da segunda linha
   
    for(i = 0; i < MeuVector.size() ; i++)
    {
    cout<<MeuVector.at(i)<<" ";//pritando os vectores
    }
   
    
    cout<<endl;//--------------------------------------------------------
    
    if(MeuVector.empty()==true)//verifica se tem valores no vector
    {
        cout<<"Esta vazio";
    }
    else 
    {
        cout<<"Nao esta vazia";
        }
    cout<<endl;//--------------------------------------------------------
    
    MeuVector.erase(MeuVector.begin()+2);//deleta a linha depois da segunda linha
    
     for(i = 0; i < MeuVector.size() ; i++)
    {
    cout<<MeuVector.at(i)<<" ";//pritando os vectores
    }
    
    cout<<endl;//--------------------------------------------------------
    
    MeuVector.erase(MeuVector.begin());//deleta a primeira linha
    
     for(i = 0; i < MeuVector.size() ; i++)
    {
    cout<<MeuVector.at(i)<<" ";//pritando os vectores
    }
    
     cout<<endl;//--------------------------------------------------------
    
    MeuVector.clear();//deleta todos os elementos

    if(MeuVector.empty()==true)//verifica se tem valores
    {
        cout<<"Esta vazio";
    }
    else 
    {
        cout<<"Nao esta vazia";
        }
    cout<<endl;//--------------------------------------------------------
    
    return 0;
}

