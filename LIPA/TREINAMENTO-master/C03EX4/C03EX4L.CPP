#include <iostream>

using namespace std;

int main() {
  double R, US, COTAÇÃO;

  // Leia R e COTAÇÃO
  cout << "Digite o valor em reais e a cotação do dólar americano: ";
  cin >> R >> COTAÇÃO;

  // US recebe R / COTAÇÃO
  US = R / COTAÇÃO;

  // Imprima o valor de US
  cout << "O valor em dólares americanos é " << US << endl;

  return 0;
}
