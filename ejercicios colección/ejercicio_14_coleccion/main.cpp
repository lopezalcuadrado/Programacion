#include <iostream>
#include <vector>
using namespace std;
vector <int> v={1,4,5,3,4,3,2,6,8,5,2,4,6,6};
vector <int> even;
int num,a;
int main() {

    for (int elem: v){
        a=elem%2;
        if (a==0){
   even.push_back(elem);
    }
    }
    //para comprobar eliminar el /* y el */ del siguiente comentario
/*
     for (int elem: even){
      cout<<elem <<endl;
    }
*/
    return 0;
}
