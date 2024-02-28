#include <iostream>

using namespace std;

int main() {
  float N1, N2, N3, N4, MD, NOVA_MD, EX;

  // Leia N1, N2, N3 e N4
  cout << "Digite as notas de N1, N2, N3 e N4: ";
  cin >> N1 >> N2 >> N3 >> N4;

  // Calcule a média
  MD = (N1 + N2 + N3 + N4) / 4;

  // Se a média for >= 7, o aluno é aprovado
  if (MD >= 7) {
    cout << "Aluno Aprovado, com média = " << MD << endl;
  }
  // Senão, o aluno faz exame
  else {
    // Leia a nota do exame
    cout << "Digite a nota do exame: ";
    cin >> EX;

    // Calcule a média final
    NOVA_MD = (MD + EX) / 2;

    // Se a média final for >= 5, o aluno é aprovado
    if (NOVA_MD >= 5) {
      cout << "Aluno Aprovado em Exame, com média final = " << NOVA_MD << endl;
    }
    // Senão, o aluno é reprovado
    else {
      cout << "Aluno Reprovado, com média final = " << NOVA_MD << endl;
    }
  }

  return 0;
}
