// C03EX08.CPP

#include <iostream>
using namespace std;

int main(void)
{

  int S1, S2;

  cout << "Entre sexo do 1o. - [1] = M / [0] = F: ";
  cin >> S1;
  cin.ignore(80, '\n');
  cout << "Entre sexo do 2o. - [1] = M / [0] = F: ";
  cin >> S2;
  cin.ignore(80, '\n');

  if (S1 == 1 xor S2 == 1)
    cout << "O 1o. pode dancar com o 2o." << endl;
  else
    cout << "O 1o. nao pode dancar com o 2o." << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
