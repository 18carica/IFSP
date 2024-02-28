#include <iostream>

using namespace std;

int main() {
  double R, US, COTAÇÃO;

  // Leia US e COTAÇÃO
  cout << "Digite o valor em dólares americanos e a cotação do real: ";
  cin >> US >> COTAÇÃO;

  // R recebe US * COTAÇÃO
  R = US * COTAÇÃO;

  // Imprima o valor de R
  cout << "O valor em reais é " << R << endl;

  return 0;
}
