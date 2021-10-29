#include <iostream> // TEN PROGRAM DZIALA TYLKO Z WIELKIMI LIETRAMI
#include <string>
#include <sstream>

using namespace std; // z. 7 i 8

int main() {
      string tekst, klucz, kod, szyfr, oryginal;

      getline(cin, tekst); // wczytuje cala linijke z konsoli do zmiennej tekst :OO
      cin >> klucz;

      // zamieniamu na tekst na powtarzajacy sie klucz :DD
      for(int i = 0, j = 0; i < tekst.size(); i++) {
            if(tekst[i] == ' ') { // dodajnosc spacji  
                  kod.push_back(' ');
            } 
            else {
                  // dodajemy na koniec zmiennej kod, litere ze zmiennej klucz
                  kod.push_back(klucz[j % klucz.size()]); 
                  j++;
            }
      }

      cout << "kod: " << kod << endl;

      // szyfrowanie koduuu Z. 7
      for(int i = 0; i < kod.size(); i++) {
            if(kod[i] == ' ') {
                  szyfr.push_back(' ');
            }
            else {
                  // szukamy litery za pomoca tego algorytmu :O
                  char litera = (tekst[i] + kod[i]) % 26 + 'A';
                  szyfr.push_back(litera);
            }
      }

      cout << "szyfr: " << szyfr << endl;

      // odszyfrowanie z. 8 
      for(int i = 0, j = 0; i < szyfr.size(); i++) {
            if(szyfr[i] == ' ') {
                  oryginal.push_back(' ');
            }
            else {
                  // odszyfrowujemy litere dzieki algorytmowi vinegere'a :O
                  char litera = (szyfr[i] - klucz[j % klucz.size()] + 26) % 26 + 'A';
                  oryginal.push_back(litera);
                  j++;
            }
      }

      cout << "oryginal: " << oryginal << endl;

      return 0;
}