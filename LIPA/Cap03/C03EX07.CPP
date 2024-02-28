// C03EX07.CPP

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{

  float A, B, C, X;

  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);

  cout << "Entre o valor <A>: "; cin >> A;
  cin.ignore(80, '\n');

  cout << "Entre o valor <B>: "; cin >> B;
  cin.ignore(80, '\n');

  cout << "Entre o valor <X>: "; cin >> X;
  cin.ignore(80, '\n');

  cout << "\n";

  if (not(X > 5))
    C = (A + B) * X;
  else
    C = (A - B) * X;

  cout << "Resultado de C = a: " << setw(5) << C << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
