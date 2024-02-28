#include <iostream>

using namespace std;

int main() {
  int A, B, X;

  // Leia A e B
  cout << "Digite A e B: ";
  cin >> A >> B;

  // X recebe o valor de A
  X = A;

  // A recebe o valor de B
  A = B;

  // B recebe o valor de X
  B = X;

  // Imprima os valores de A, B e X
  cout << "A = " << A << endl;
  cout << "B = " << B << endl;
  cout << "X = " << X << endl;

  return 0;
}
