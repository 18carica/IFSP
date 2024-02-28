#include <iostream>

using namespace std;

int main() {
  double RAIZ, BASE, INDICE;

  // Leia BASE e INDICE
  cout << "Digite a base e o índice: ";
  cin >> BASE >> INDICE;

  // RAIZ recebe sqrt(BASE) / INDICE
  RAIZ = sqrt(BASE) / INDICE;

  // Imprima RAIZ
  cout << "A raiz é " << RAIZ << endl;

  return 0;
}
