#include <iostream>

using namespace std;

int main() {
  int N, R;

  // Leia N
  cout << "Digite um número: ";
  cin >> N;

  // Se N < 0, então R recebe -N
  if (N < 0) {
    R = -N;
  }
  // Senão, R recebe N
  else {
    R = N;
  }

  // Imprima R
  cout << "O resultado é " << R << endl;

  return 0;
}
