#include <iostream>
#include <array>
using namespace std;
int c=-1,a=0;
array <int,20> arr1{4,7,7,7,7,7,7,8,5,7,2,7,7,8,9,4,7,2,4,5};
array <int,10> des{0,0,0,0,0,0,0,0,0,0};
  int main() {
    for (int num: arr1){
        if (num==7){
           c++;
           des.at(c)++;
                }
             else {
            c=-1;
    }
          }

     for (int num: des){
         if (num >= 1){
         a++;
         }
     }
      cout << "El 7 aparece "<< a << " veces seguidas"<< endl;
 return 0;
}
