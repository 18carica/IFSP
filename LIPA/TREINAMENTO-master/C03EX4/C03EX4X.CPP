#include <iostream>

using namespace std;

int main() {
  double RAIZ, BASE, INDICE;

  // Leia BASE e INDICE
  cout << "Digite a base e o �ndice: ";
  cin >> BASE >> INDICE;

  // RAIZ recebe sqrt(BASE) / INDICE
  RAIZ = sqrt(BASE) / INDICE;

  // Imprima RAIZ
  cout << "A raiz � " << RAIZ << endl;

  return 0;
}
