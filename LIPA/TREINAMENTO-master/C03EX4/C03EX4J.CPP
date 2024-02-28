#include <iostream>

using namespace std;

int main() {
  int A, B, R;

  // Leia A e B
  cout << "Digite A e B: ";
  cin >> A >> B;

  // R recebe (A - B) - 2
  R = (A - B) - 2;

  // Imprima o valor de R
  cout << "R = " << R << endl;

  return 0;
}
