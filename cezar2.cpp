#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <math.h>

using namespace std; // z. 5 

int main() {
      string tekst, wyjscie;
      int klucz;
      fstream kod("kodCezara.txt", kod.in);

      if(!kod.is_open()) {
            cout << " :| \n"; // blad :|
            return 0;
      }
      else {
            getline(kod, tekst); // wczytywanie z pliku kod do zmiennej tekst ;p
      }

      cin >> klucz;
      // ilosc cyfr w zmiennej klucz 
      int ilosc = floor(log10(klucz) + 1); // funckja floor zaokgragla liczbe do dolu ;p

      for(int i = 0, j = 0; i < tekst.size(); i++) {
            if(tekst[i] == ' ') { // dodawanie spacji
                  wyjscie.push_back(' ');
            }
            else {
                  // szukanie odpowiedniej cyfry ze zmiennej klucz 
                  int k = klucz / pow(10, j % ilosc);
                  k = k % 10;
                  j++;
                  // szuaknie litery algorytmem cezara :o  
                  char litera = ((tekst[i] - 'A') + k) % 26 + 'A';
                  wyjscie.push_back(litera);
            }
      }

      cout << "wyjscie: " << wyjscie << endl;

      return 0;
}