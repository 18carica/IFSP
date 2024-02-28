//C06EX01.CPP

#include <iostream>
using namespace std;

int main(void)
{
    int IDADE = 25;     //Em vez de 0 pode ser usado NULL or ptrnull(que o ponteiro não está apontando para xx endereço de memoória), [or int *PIDADE = &IDADE;].
    int *PIDADE = 0;    //  int[(tipo de dado)na verdade ela não e um tipo e sim um limitador] estabelece o limite da variavel ponteiro.

    PIDADE = &IDADE;

    cout << "O valor idade " << IDADE << " esta armazenado";
    cout << " no endereço de memoria " << PIDADE << endl;

    cout << endl;
    cout << "Tecle <Enter> para encenrrar.... ";
    cin.get();
    return 0;
}
