//C06EX02.CPP

#include <iostream>
using namespace std;

int main(void)
{
    int IDADE = 25;
    int *PIDADE = 0;

    PIDADE = &IDADE;

    cout << "IDADE = " << IDADE << " | End: = "<< &IDADE;
    cout << endl;           //(*) Mostrar o conteudo da variaval apontado.
    cout << "PIDADE = " << *PIDADE;
    cout << " | End: = "<< &PIDADE << endl;
                            //End. do Ponteiro.
    cout << endl;
    cout << "Tecle <Enter> para encenrrar.... ";
    cin.get();
    return 0;
}
