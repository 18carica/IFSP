#include <iostream>

using namespace std;

int main() {
  int N;

  // Leia N
  cout << "Digite um número: ";
  cin >> N;

  // N recebe o valor absoluto de N
  N = abs(N);

  // Imprima N
  cout << "O resultado é " << N << endl;

  return 0;
}
