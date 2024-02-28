#include <iostream>

using namespace std;

int main() {
  double VELOCIDADE, DISTANCIA, TEMPO;

  // Leia DISTÂNCIA e TEMPO
  cout << "Digite a distância (em km) e o tempo (em minutos): ";
  cin >> DISTANCIA >> TEMPO;

  // VELOCIDADE recebe (DISTÂNCIA * 1000) / (TEMPO * 60)
  VELOCIDADE = (DISTANCIA * 1000) / (TEMPO * 60);

  // Imprima VELOCIDADE
  cout << "A velocidade é de " << VELOCIDADE << " km/h" << endl;

  return 0;
}
