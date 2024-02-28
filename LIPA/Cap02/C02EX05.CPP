// C02EX05.CPP

#include <iostream>
using namespace std;

int main (void)
{
  char NOME[50], SOBRENOME [20];

  cout << "Informe seu nome ...: ";
  cin.getline(NOME, sizeof(NOME));

  cout << "Informe sobrenome ...:";
  cin >> SOBRENOME;
  cin.ignore(80, '\n');

  cout << "Ola,\n" << NOME << " " << SOBRENOME;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
