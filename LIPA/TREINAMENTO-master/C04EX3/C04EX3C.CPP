#include <iostream>

using namespace std;

int main() {
  float N1, N2, N3, N4, MD;

  // Leia N1, N2, N3 e N4
  cout << "Digite as notas de N1, N2, N3 e N4: ";
  cin >> N1 >> N2 >> N3 >> N4;

  // Calcule a média
  MD = (N1 + N2 + N3 + N4) / 4;

  // Se a média for >= 5, o aluno é aprovado
  if (MD >= 5) {
    cout << "Aluno Aprovado, com média = " << MD << endl;
  }
  // Senão, o aluno é reprovado
  else {
    cout << "Aluno Reprovado, com média = " << MD << endl;
  }

  return 0;
}
