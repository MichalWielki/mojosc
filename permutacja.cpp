#include <iostream>
#include <sstream>
#include <ctime>

using namespace std; // z. 6

// funckja do tworzenie nowego alfabetu :o
string permutacja() {
      srand(time(NULL)); // wkladanie ziarna do randomowego generatora :OOO

      string alfabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
      char litera;

      for(int i = 0, j = 0, k = 0; i < 100; i++) {
            // losowanie :D
            j = rand() % 26;
            k = rand() % 26;
            litera = alfabet[j]; // zapisywanie oryginalnej litery z alfabetu do zmiennej litera
            alfabet[j] = alfabet[k]; // zamiana liter w alfabecie
            alfabet[k] = litera;
      }    

      return alfabet;
}

int main() {
      string tekst, alfabet, wyjscie;
      getline(cin, tekst); // pobieranie tekstu z linijki 

      alfabet = permutacja(); // randomowo stworzony nowy alfabet

      // szyfrowania za pomoca nowego alfabetu :o
      for(int i = 0; i < tekst.size(); i++) {
            if(tekst[i] == ' ') {
                  wyjscie.push_back(' ');
            }
            else {
                  wyjscie.push_back(alfabet[tekst[i] % 26]);
            }
      }

      cout << "wyjsice: " << wyjscie; 

      return 0;
}