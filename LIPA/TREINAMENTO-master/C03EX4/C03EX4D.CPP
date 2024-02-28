#include <iostream>

using namespace std;

int main() {
  // Declaração de variáveis
  double DISTANCIA;
  double TEMPO;
  double VELOCIDADE;
  double LITROS_USADOS;

  // Leitura do tempo de viagem e da velocidade média
  cout << "Digite o tempo de viagem: ";
  cin >> TEMPO;

  cout << "Digite a velocidade média: ";
  cin >> VELOCIDADE;

  // Cálculo da distância percorrida
  DISTANCIA = TEMPO * VELOCIDADE;

  // Cálculo do consumo de combustível
  LITROS_USADOS = DISTANCIA / 12;

  // Impressão dos resultados
  cout << "Velocidade média: " << VELOCIDADE << endl;
  cout << "Tempo de viagem: " << TEMPO << endl;
  cout << "Distância percorrida: " << DISTANCIA << endl;
  cout << "Consumo de combustível: " << LITROS_USADOS << endl;

  return 0;
}
