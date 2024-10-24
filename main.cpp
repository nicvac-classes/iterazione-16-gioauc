#include <iostream>
using namespace std;

int main() {
  int totNumeri(0), i(0);
  float x(0), max(0);
  cout << "Quanti numeri inserire?" << endl;
  cin >> totNumeri;
  for (i = 1; i <= totNumeri; i++) {
    cout << "Inserisci il " << i << "^ numero" << endl;
    cin >> x;
    if (i == 1) {
      max = x;
    }
    if (x > max) {
      max = x;
    }
  }
  cout << "Il massimo è " << max << endl;
}