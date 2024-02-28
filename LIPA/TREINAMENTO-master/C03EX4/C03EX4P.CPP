#include <iostream>

using namespace std;

int main() {
  double SM, PR, NS;

  // Leia SM e PR
  cout << "Digite o salário mensal e o percentual de aumento: ";
  cin >> SM >> PR;

  // NS recebe SM + SM * PR / 100
  NS = SM + SM * PR / 100;

  // Imprima NS
  cout << "O novo salário é " << NS << endl;

  return 0;
}
