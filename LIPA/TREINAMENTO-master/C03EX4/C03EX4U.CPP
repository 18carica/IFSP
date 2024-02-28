#include <iostream>

using namespace std;

int main() {
  double VOLUME, RAIO;

  // Leia RAIO
  cout << "Digite o raio: ";
  cin >> RAIO;

  // VOLUME recebe (4 / 3) * 3.14159 * (RAIO^3)
  VOLUME = (4.0 / 3.0) * 3.14159 * pow(RAIO, 3.0);

  // Imprima VOLUME
  cout << "O volume é de " << VOLUME << endl;

  return 0;
}
