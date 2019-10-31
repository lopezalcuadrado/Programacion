//Pedir tres números al usario: a, b y c. Crear un vector que contenga todos los números múltiplos de c que hay entre a y b (incluídos).
#include <iostream>
#include <vector>
using namespace std;
int a , b , c , num=0 , cont=1;
vector <int> mult ;

int main() {
    cout << "introduzca el numero a"<<endl;
    cin >> a;
    cout << "introduzca el numero b"<<endl;;
    cin >> b;
    cout << "introduzca el numero c"<<endl;
    cin >> c;
    while (c >= num){
        num = a*cont;
        if ((num >= b)&&(c >= num)){
                mult.push_back(num);
    }

        cont++;
    }
    cout << "Los multiplos de "<< a<< " comprendidos entre " << b << " y " << c << " son: ";
    for (int elem: mult){
         cout<<elem <<" - ";
       }
    return 0;
}
