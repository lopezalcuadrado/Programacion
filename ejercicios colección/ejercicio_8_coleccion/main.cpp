#include <iostream>
using namespace std;
int main() {
  string frase;
  int n_veces{0};

  cout << "Introduce una frase\n";
  getline(cin, frase);

  string palabra{""};
  for(auto letra: frase){
    if(letra == ' '){
      if(palabra.size() != 0){
        if(palabra.at(0) == 'a')
          cout << palabra << "\n";
        palabra = "";
      }
    }else{
      palabra.push_back(letra);
    }
  }

  cout << palabra << "\n";

  return 0;
}
