//Pedir un número al usuario y calcular el sumatorio desde 1 hasta dicho número.
#include <iostream>
#include <vector>
using namespace std;
vector <int> v={1,4,5,3,4,3,2,6,8,5,2,4,6,6};
vector <int> even;
int num,num2=0;

int main() {
    cout << "introduzca un numero :";
    cin >> num;
    while(num >= 1){
       num2=num+num2;
       num = num-1;
    }
    cout << num2 << endl;


    return 0;
}
