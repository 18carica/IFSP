#include <iostream>

using namespace std;

int main() {
  double PRESTAÇÃO, VALOR, TAXA, TEMPO;

  // Leia VALOR, TAXA e TEMPO
  cout << "Digite o valor, a taxa e o tempo: ";
  cin >> VALOR >> TAXA >> TEMPO;

  // PRESTAÇÃO recebe VALOR + (VALOR * (TAXA / 100) * TEMPO)
  PRESTAÇÃO = VALOR + (VALOR * (TAXA / 100) * TEMPO);

  // Imprima o valor de PRESTAÇÃO
  cout << "A prestação é " << PRESTAÇÃO << endl;

  return 0;
}
