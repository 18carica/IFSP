// C03EX09.CPP

#include <iostream>
using namespace std;

int main(void)
{

  float A, B, C;

  cout << "Entre o lado <A>: "; cin >> A;
  cin.ignore(80, '\n');

  cout << "Entre o lado <B>: "; cin >> B;
  cin.ignore(80, '\n');

  cout << "Entre o lado <C>: "; cin >> C;
  cin.ignore(80, '\n');

  if (A<B+C and B<A+C and C<A+B)
    if (A==B and B==C)
      cout << "Triangulo Equilatero.";
    else
      if (A==B or A==C or C==B)
        cout << "Triangulo Isosceles.";
      else
        cout << "Triangulo Escaleno.";
  else
    cout << "Valores fornecidos nao formam triangulo.";
  cout << endl << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
