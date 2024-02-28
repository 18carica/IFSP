// C06EX10.CPP

#include <iostream>
using namespace std;

int main(void)
{

  int A = 1;
  int *PA = 0;

  PA = &A;

  cout << "Endereco atual ...............: " << PA << endl;

  *(PA += 10);
  cout << "Proximo endereco a frente ....: " << PA << endl;

  *(PA += 10);
  cout << "Proximo endereco a frente ....: " << PA << endl;

  *(PA -= 10);
  cout << "Endereco anterior para tras ..: " << PA << endl;

  *(PA -= 10);
  cout << "Endereco anterior para tras ..: " << PA << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

