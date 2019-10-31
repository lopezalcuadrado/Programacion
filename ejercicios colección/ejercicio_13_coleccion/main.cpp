#include <iostream>
#include <string>
using namespace std;

string fr{};
string pa{};
int pos{ -1 };
int main() {
    cout << "escriba una frase: ";
    getline(std::cin, fr);
    for (char a : fr) {
       pa.push_back(a);
       pos=pos+1;
       if (a == ' ' || pos == fr.length() - 1) {
            if (pa.find('a')!=-1) {
                cout << pa << " - ";
            }
             pa.erase();
      }

    }
cout << endl;
return 0;
}
