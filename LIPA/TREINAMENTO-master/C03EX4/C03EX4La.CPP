#include <iostream>
#include <string>

using namespace std;

int main() {
  string R, COTAÇÃO;
  double r, cotacao;

  // Leia R e COTAÇÃO
  cout << "Digite o valor em reais e a cotação do dólar americano: ";
  getline(cin, R);
  getline(cin, COTAÇÃO);

  // Converta R e COTAÇÃO para números reais
  r = stod(R);
  cotacao = stod(COTAÇÃO);

  // US recebe R / COTAÇÃO
  US = r / cotacao;

  // Imprima o valor de US
  cout << "O valor em dólares americanos é " << US << endl;

  return 0;
}
