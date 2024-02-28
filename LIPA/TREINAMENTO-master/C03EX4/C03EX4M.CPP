#include <iostream>

using namespace std;

int main() {
  int A, B, C, R;

  // Leia A, B e C
  cout << "Digite A, B e C: ";
  cin >> A >> B >> C;

  // R recebe (A - 2) + (B - 2) + (C - 2)
  R = (A - 2) + (B - 2) + (C - 2);

  // Imprima o valor de R
  cout << "R = " << R << endl;

  return 0;
}
