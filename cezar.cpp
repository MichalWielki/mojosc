#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std; // z. 2, 3 i 4 

int main() {
      string tekst, wyjscie;
      int klucz, klucz1, klucz2;
      fstream kod("kodCezara.txt", kod.in);

      if(!kod.is_open()) {
            cout << " :| \n"; // blad :|
            return 0;
      }
      else {
            getline(kod, tekst); // wczytywanie z pliku kod do zmiennej tekst ;p
      }

      cin >> klucz1 >> klucz2; // dwa klucz do samoglosek i spolglosek :D
      klucz = klucz1;

      for(int i = 0; i < tekst.size(); i++) {
            if(tekst[i] == ' ') { // dodawanie spacji
                  wyjscie.push_back(' ');
            }
            else {
                  char l = tekst[i];
                  if(l == 'A' || l == 'E' || l == 'I' || l == 'J' || l == 'O' || l == 'U' || l == 'Y') {
                        klucz = klucz2;
                  }
                  else {
                        klucz = klucz1;
                  }
                  // szuaknie litery algorytmem cezara
                  char litera = ((tekst[i] - 'A') + klucz) % 26 + 'A';
                  wyjscie.push_back(litera);
            }
      }

      cout << "wyjscie: " << wyjscie;

      return 0;
}