#include <iostream> // najwieszky program na swiecie
#include <string>
#include <fstream>

using namespace std; // z. 9
 
int main() {
      int klucz;
      string tekst, wyjscie;
      fstream kod("kodXOR.txt", kod.in);

      if(!kod.is_open()) {
            cout << ":| \n";
            return 0;
      }
      else {
            getline(kod, tekst); // wczytywanie z pliku kod do zmiennej tekst ;p
      }

      cin >> klucz;

      for(int i = 0; i < tekst.size(); i++) {
            wyjscie.push_back(tekst[i] ^ klucz); // dodajemy na koniec zaszyfrowana litere :D
            wyjscie.push_back(' '); // dodajemy spacje na koniec :O
      }

      cout << wyjscie;

      return 0;
}