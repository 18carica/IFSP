#include <iostream>

using namespace std;

int main() {
  // Declaração de variáveis
  double C;
  double F;

  // Leitura da temperatura em Celsius
  cout << "Digite a temperatura em Celsius: ";
  cin >> C;

  // Cálculo da temperatura em Fahrenheit
  F = C * 9 / 5 + 32;

  // Impressão da temperatura em Fahrenheit
  cout << "A temperatura em Fahrenheit e " << F << endl;

  return 0;
}
