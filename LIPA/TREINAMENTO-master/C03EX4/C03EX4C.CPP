#include <iostream>

using namespace std;

int main() {
  // Declaração de variáveis
  double R;
  double A;
  double V;

  // Leitura do raio e da altura do cilindro
  cout << "Digite o raio do cilindro: ";
  cin >> R;

  cout << "Digite a altura do cilindro: ";
  cin >> A;

  // Cálculo do volume do cilindro
  V = 3.14159 * R * R * A;

  // Impressão do volume do cilindro
  cout << "O volume do cilindro e " << V << endl;

  return 0;
}
