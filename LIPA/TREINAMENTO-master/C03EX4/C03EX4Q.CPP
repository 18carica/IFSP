#include <iostream>

using namespace std;

int main() {
  double A, R;

  // Leia R
  cout << "Digite o raio: ";
  cin >> R;

  // A recebe 3.14159 * R - 2
  A = 3.14159 * R - 2;

  // Imprima A
  cout << "A área é " << A << endl;

  return 0;
}
