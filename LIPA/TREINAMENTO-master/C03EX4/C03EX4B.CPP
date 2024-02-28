#include <iostream>

using namespace std;

int main() {
  // Declaração de variáveis
  double C;
  double F;

  // Leitura da temperatura em Fahrenheit
  cout << "Digite a temperatura em Fahrenheit: ";
  cin >> F;

  // Cálculo da temperatura em Celsius
  C = (F - 32) * 5 / 9;

  // Impressão da temperatura em Celsius
  cout << "A temperatura em Celsius e " << C << endl;

  return 0;
}
