// C06EX08.CPP

#include <iostream>
using namespace std;

int main(void)
{

  int A = 1;
  int *PA = 0;

  PA = &A;

  cout << "Endereco atual ...............: " << PA << endl;

  PA++;
  cout << "Proximo endereco a frente ....: " << PA << endl;

  PA++;
  cout << "Proximo endereco a frente ....: " << PA << endl;

  PA--;
  cout << "Endereco anterior para tras ..: " << PA << endl;

  PA--;
  cout << "Endereco anterior para tras ..: " << PA << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
