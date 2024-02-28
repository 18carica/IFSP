// C03EX10.CPP

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{

  float A, B, R;
  int OPCAO;

  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);

  cout << "Entre o valor <A>: "; cin >> A;
  cin.ignore(80, '\n');

  cout << "Entre o valor <B>: "; cin >> B;
  cin.ignore(80, '\n');

  cout << "\n";
  cout << "[1] - Adicao" << endl;
  cout << "[2] - Subtracao" << endl;
  cout << "[3] - Multiplicacao" << endl;
  cout << "[4] - Divisao" << endl;
  cout << "\n";

  cout << "Escolha uma opcao: "; cin >> OPCAO;
  cin.ignore(80, '\n');

  if (OPCAO == 1)
    R = A + B;
  if (OPCAO == 2)
    R = A - B;
  if (OPCAO == 3)
    R = A * B;
  if (OPCAO == 4)
    if (B == 0)
      R = 0;
    else
      R = A / B;
  cout << "\nResultado e igual a: " << setw(5);
  cout << R << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
