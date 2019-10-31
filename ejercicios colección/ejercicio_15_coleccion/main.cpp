//Usando while. A partir de un vector de números enteros, crear otro que contenga sólo los números pares. Por ejemplo, a parir de {1,3,4,5,6,7} se crea -> {4,6}.
#include <iostream>
#include <vector>
using namespace std;
vector <int> v={1,4,5,3,4,3,2,6,8,5,2,4,6,6};
vector <int> even;
int b,size,count=0;
float a;
int main() {
    size=v.size();
    while(count != size){
        b=v.at(count);
        a=b%2;
        if (a==0){
   even.push_back(b);
    }
    count ++;
    }
    //para comprobar eliminar el /* y el */ del siguiente comentario
/*
     for (int elem: even){
      cout<<elem <<endl;
    }
*/
    return 0;
}
