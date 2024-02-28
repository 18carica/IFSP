#include <iostream>

using namespace std;

int main() {
  int BASE, EXPOENTE, POTENCIA;

  // Leia BASE e EXPOENTE
  cout << "Digite a base e o expoente: ";
  cin >> BASE >> EXPOENTE;

  // POTÊNCIA recebe BASE ** EXPOENTE
  POTENCIA = BASE ** EXPOENTE;

  // Imprima POTÊNCIA
  cout << "A potência é " << POTENCIA << endl;

  return 0;
}
