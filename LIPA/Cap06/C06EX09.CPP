// C06EX09.CPP

#include <iostream>
using namespace std;

int main(void)
{

  int IDADE = 25;
  int *PIDADE = 0;

  PIDADE = &IDADE;

  cout << "Variavel IDADE ....: " << IDADE << endl;
  cout << "Ponteiro PIDADE ...: " << PIDADE << endl;

  (*PIDADE)++;

  cout << "Variavel IDADE ....: " << IDADE << endl;
  cout << "Ponteiro PIDADE ...: " << PIDADE << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

