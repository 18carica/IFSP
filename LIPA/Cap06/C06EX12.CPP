// C06EX12.CPP

#include <iostream>
using namespace std;

int main(void)
{

  int A = 10;
  int B = 20;
  int *PA = 0, *PB = 0;

  PA = &A;
  PB = &B;

  cout << "Valor de PA = " << *PA << " no endereco = ";
  cout << &PA << endl;
  cout << "Valor de PB = " << *PB << " no endereco = ";
  cout << &PB << endl;
  cout << endl;

  *PA = *PB;
 
  cout << "Valor de PA = " << *PA << " no endereco = ";
  cout << &PA << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

