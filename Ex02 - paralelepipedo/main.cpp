#include <cstdlib>
#include <iostream>

using namespace std;
class paralelepipedo{
      private:
          int altura;
          int largura;
          int comprimento; 
          int CalcVolume(){
              return (altura*largura*comprimento); 
              }   
      public:    
          void SetLados(int a, int b, int c){
               if (a >0 && b>0 && c>0){
               altura = a; largura = b; comprimento = c;}
               else {cout << "ERRO!\n\n"; system("pause"); exit(-1);}
               }
          void ObterVolume(){
               cout << "O volume eh " << CalcVolume() << "\n\n";     
          }
      
      
};

int main()
{
    paralelepipedo p;
    p.SetLados(1,1,1);
    p.ObterVolume();
    system("PAUSE");
    return EXIT_SUCCESS;
}
