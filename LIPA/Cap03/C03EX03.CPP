// C03EX03.CPP

#include <iostream>
using namespace std;

int main(void)
{

  int A, B, X;

  cout << "Entre o primeiro valor..: "; cin >> A;
  cin.ignore(80, '\n');

  cout << "Entre o segundo valor...: "; cin >> B;
  cin.ignore(80, '\n');

  cout << "\n";

  if (A > B)
    {
      X = A;
      A = B;
      B = X;
    }


  cout << "Os valores ordenados sao: " << A;
  cout << " e " << B << "." << endl << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
