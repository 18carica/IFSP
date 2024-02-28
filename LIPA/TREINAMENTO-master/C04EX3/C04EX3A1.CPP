#include <iostream>

using namespace std;

int main() {
  int A, B, DIF;

  // Leia A e B
  cout << "Digite A e B: ";
  cin >> A >> B;

  // Se A > B, então DIF recebe A - B
  if (A > B) {
    DIF = A - B;
  }
  // Senão, DIF recebe B - A
  else {
    DIF = B - A;
  }

  // Imprima DIF
  cout << "A diferença é " << DIF << endl;

  return 0;
}
