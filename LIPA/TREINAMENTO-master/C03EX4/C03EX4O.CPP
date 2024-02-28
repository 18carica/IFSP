#include <iostream>

using namespace std;

int main() {
  int A, B, C, D, P, S;

  // Leia A, B, C e D
  cout << "Digite A, B, C e D: ";
  cin >> A >> B >> C >> D;

  // P recebe A * C
  P = A * C;

  // S recebe B + D
  S = B + D;

  // Imprima P e S
  cout << P << " " << S << endl;

  return 0;
}
