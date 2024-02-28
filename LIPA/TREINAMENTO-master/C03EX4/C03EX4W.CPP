#include <iostream>

using namespace std;

int main() {
  double PÉS, METROS;

  // Leia PÉS
  cout << "Digite o número de pés: ";
  cin >> PÉS;

  // METROS recebe PÉS * 0,3048
  METROS = PÉS * 0.3048;

  // Imprima METROS
  cout << "O número de metros é " << METROS << endl;

  return 0;
}
