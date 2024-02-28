// C02EX03.CPP

#include <iostream>

int main (void)
{
   char NOME[40], SOBRENOME[20];

   std::cout << "Informe seu nome: ";
   std::cin >> NOME >> SOBRENOME;
   std::cin.ignore(80, '\n');

   std::cout << "Ola, " << NOME << " " << SOBRENOME;
   std::cout << std::endl;

   std::cout << "Tecle <Enter> para encerrar... ";
   std::cin.get();
   return 0;
}
