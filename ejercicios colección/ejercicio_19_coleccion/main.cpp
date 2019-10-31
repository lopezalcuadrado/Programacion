/*Pedir al usuario un número y mostrar por pantalla si dicho número es primo o no (usando el bucle while). */
#include <iostream>
using namespace std;
int cont=0;
int  a,b,num;
int main() {
    cout << "Introduzca un número: ";
    cin >> num;
    a=num;
        while(a >= 1){
            a=a-1;
            b=num%a;

            if (b==0){
                cout<< endl;
                cout << a;
                cout<< endl;
          cont ++;
        }

        }
        if (cont != 1){
          cout << "No es primo, tiene "<< cont << " divisores.";
        }
        else {
        cout << "Es primo"<< cont;
        }
cout << endl;
return 0;
}
