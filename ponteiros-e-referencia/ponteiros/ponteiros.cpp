#include <iostream>
using namespace std;


int main(){
   
    int *intPointer;  
    int another;

    //Alocação de memoria 
    intPointer = new int;

    //Obter conteudo  do endereço apontado intPointer
    another = *intPointer; 

    cout << "Valor de :" << another << endl;
   
   *intPointer = 25;

    another = *intPointer; 

    cout << "Valor de :" << another << endl;


    return 0;

}
  