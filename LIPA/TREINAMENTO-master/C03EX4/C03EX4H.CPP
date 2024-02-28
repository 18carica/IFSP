#include <iostream>

using namespace std;

int main() {
  double VOLUME, COMPRIMENTO, LARGURA, ALTURA;

  // Leia COMPRIMENTO, LARGURA e ALTURA
  cout << "Digite o comprimento, a largura e a altura: ";
  cin >> COMPRIMENTO >> LARGURA >> ALTURA;

  // VOLUME recebe COMPRIMENTO * LARGURA * ALTURA
  VOLUME = COMPRIMENTO * LARGURA * ALTURA;

  // Imprima o valor de VOLUME
  cout << "O volume é " << VOLUME << endl;

  return 0;
}
