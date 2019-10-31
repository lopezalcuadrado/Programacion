/*Crear un programa que calcule la media de un array de números enteros.*/
#include <iostream>
#include <array>
using namespace std;

int tot=0;
float f=0;
array<int,6> arr1{10,5,7,5,9,5};
  int main() {

      for (int num: arr1){
      tot=num;
      f=f+tot;
      }
      float a=f/arr1.size();
     cout << "la media es " << a<<endl;
  return 0;

  }
