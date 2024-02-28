// C02EX03teste.CPP

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main (void)
{
    char NOME[40], SOBRENOME[20];
    int dia, mes, ano;
    float ALTURA;

    cout << "Informe seu nome: ";
    cin >> NOME >> SOBRENOME;
    cout << "Digite sua data de nascimento (dd mm aaaa): ";
    cin >> dia >> mes >> ano;
    cout << "Informe sua altura: ";
    cin >> ALTURA;
    cin.ignore(80, '\n');

    int IDADE = 2023 - ano;
    //if (mes < 6) {
    //IDADE--;
    //} else if (mes == 6 && dia < 22) {
    //IDADE--;
    //}

    cout << "Ola, " << NOME << " " << SOBRENOME;
    cout << endl;
    cout << "Voce tem " << IDADE << " anos";
    cout << endl;
    cout << "Sua altura e  " << ALTURA << "m";
    cout << endl;

    cout << "Tecle <Enter> para encerrar... ";
    cin.get();
    return 0;
}

