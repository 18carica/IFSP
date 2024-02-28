#include <iostream>
#include <string>

using namespace std;

int main() {
  string A, B, X;

  // Leia A e B
  cout << "Digite A e B: ";
  cin.getline(A, 100);
  cin.getline(B, 100);

  // Converta A e B para números inteiros
  int a = stoi(A);
  int b = stoi(B);

  // X recebe o valor de A
  X = A;

  // A recebe o valor de B
  A = B;

  // B recebe o valor de X
  B = X;

  // Imprima os valores de A, B e X
  cout << "A = " << a << endl;
  cout << "B = " << b << endl;
  cout << "X = " << X << endl;

  return 0;
}
