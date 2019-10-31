/*Crear un array de números enteros e indicar cuántas veces aparece el número 7.*/
#include <iostream>
#include <array>
using namespace std;

int size=0,num,f=0;
array<int,18> arr1{1,7,5,7,6,5,7,3,7,1,7,5,7,6,5,7,3,7};
  int main() {

      for (int num: arr1){
      if (num==7){
      f=f+1;
      }
      }
    if (f==0){
     cout << "El numero 7 no aparece en la array ";
      }
     cout << "El numero 7 aparece "<< f << " veces\n";
  return 0;

  }
