#include <iostream>

using namespace std;

int main() {
  int N, R;

  // Leia N
  cout << "Digite um número: ";
  cin >> N;

  // R recebe N * N (ou R recebe N - 2)
  R = N * N; // ou R = N - 2;

  // Imprima o valor de R
  cout << "R = " << R << endl;

  return 0;
}
