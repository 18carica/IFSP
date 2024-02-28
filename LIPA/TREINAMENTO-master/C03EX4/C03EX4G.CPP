#include <iostream>

using namespace std;

int main() {
  int A, B, C, D, A1, A2, A3, A4, A5, A6, M1, M2, M3, M4, M5, M6;

  // Leia A, B, C e D
  cout << "Digite A, B, C e D: ";
  cin >> A >> B >> C >> D;

  // A1 recebe A + B
  A1 = A + B;

  // A2 recebe A + C
  A2 = A + C;

  // A3 recebe A + D
  A3 = A + D;

  // A4 recebe B + C
  A4 = B + C;

  // A5 recebe B + D
  A5 = B + D;

  // A6 recebe C + D
  A6 = C + D;

  // M1 recebe A * B
  M1 = A * B;

  // M2 recebe A * C
  M2 = A * C;

  // M3 recebe A * D
  M3 = A * D;

  // M4 recebe B * C
  M4 = B * C;

  // M5 recebe B * D
  M5 = B * D;

  // M6 recebe C * D
  M6 = C * D;

  // Imprima os valores de A1, A2, A3, A4, A5, A6, M1, M2, M3, M4, M5, M6
  cout << A1 << " " << A2 << " " << A3 << " " << A4 << " " << A5 << " " << A6 << endl;
  cout << M1 << " " << M2 << " " << M3 << " " << M4 << " " << M5 << " " << M6 << endl;

  return 0;
}
