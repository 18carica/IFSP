#include <iostream>

using namespace std;

int main() {
  // Declara��o de vari�veis
  double C;
  double F;

  // Leitura da temperatura em Fahrenheit
  cout << "Digite a temperatura em Fahrenheit: ";
  cin >> F;

  // C�lculo da temperatura em Celsius
  C = (F - 32) * 5 / 9;

  // Impress�o da temperatura em Celsius
  cout << "A temperatura em Celsius e " << C << endl;

  return 0;
}
