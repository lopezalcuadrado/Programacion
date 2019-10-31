/*A partir de un vector de std::string crear otro vector que contenga sólo los elementos que aparece
después del std::string "guardar". Por ejemplo, para el vector {"perro", "gato", "guardar", "andres", "luis", "guardar", "botella"}
 crearía otro vector conteniendo {"andres", "botella"}.*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string fr{};
string pa{};
int pos{ -1 }, num=0;
int main() {
    cout << "escriba una frase: ";
    getline(cin, fr);
    for (char a : fr) {
       pa.push_back(a);
       pos=pos+1;
       if (a == ' ' || pos == fr.length() - 1) {
           if (num == 1)  {
               num=0;
               cout << pa << " - ";
           }
            if (pa.find("guardar")!=-1) {
               num=num+1;
            }

             pa.erase();
      }

    }
cout << endl;
return 0;
}
