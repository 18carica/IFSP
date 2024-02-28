// C03EX14.CPP

#include <iostream>
using namespace std;

int main(void)
{

  int N, R4, R5;

  cout << "Entre um valor  numerico natural: "; cin >> N;
  cin.ignore(80, '\n');
  cout << endl;

  R4 = N - 4 * (N / 4);
  R5 = N - 5 * (N / 5);

  if (R4 == 0 and R5 == 0)
    cout << N << endl;
  else
    cout << "Valor nao e divisivel por 4 e 5." << endl;

  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
