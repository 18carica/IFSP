#include <iostream>

using namespace std;

int main() {
  double A, B, R1, R2, R3, R4;

  // Leia A e B
  cout << "Digite A e B: ";
  cin >> A >> B;

  // R1 recebe A + B
  R1 = A + B;

  // R2 recebe A - B
  R2 = A - B;

  // R3 recebe A * B
  R3 = A * B;

  // R4 recebe A / B
  R4 = A / B;

  // Imprima R1, R2, R3 e R4
  cout << R1 << " " << R2 << " " << R3 << " " << R4 << endl;

  return 0;
}
