//Pedir al usuario que introduzca un texto por teclado y mostrar por pantalla el número de veces que aparece la vocal "a".
#include <iostream>
using namespace std;
int avocal=0/*numero de vocales a*/, pos /*Posicion de dicha vocal*/;
int main()
{
    string text;
    cout << "       DETECTOR DE LA VOCAL A  " << endl;
    cout << "\n\n\nInserte su texto aqui:";
getline(cin, text);
    pos = text.find ("a");

    for(char element: text){
       if(element=='a'){
           avocal=avocal+1;
    }
    }
 cout  << "la vocal aparece "<< avocal<<" veces en tu frase \n";
    return 0;
}
