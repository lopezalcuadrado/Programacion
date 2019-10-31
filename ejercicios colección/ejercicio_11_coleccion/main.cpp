/*Crear un array de números enteros (entre el 1 y el 10) e indicar cuál es el número que más veces aparece (y cuántas veces aparece).*/
#include <iostream>
#include <array>
using namespace std;
int a=0, b=0;
array <int,7> arr1{1,3,4,1,7,1,2};
array <int,10> rep {0,0,0,0,0,0,0,0,0,0};
  int main() {
      for (int num: arr1){
     rep.at(num-1)=rep.at(num-1)+1;
      }

      for (int num: rep){
          if (num >= a){
              num=a;
          }
}
      for (int num: rep){
          if (num == a){
              num = b;
          }
          }

cout << "El numero que mas veces se repite es:" <<b<< "y se repite"<<a<< "veces";
  return 0;

  }
