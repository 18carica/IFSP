#include <iostream>
#include <string>

class Aluno
{
  private:
    std::string nome;
    double notas[4];
    double media;

  public:
    void poeNome(const std::string &nome)
    {
      this->nome = nome;
    }

    void poeNotas()
    {
      for (int i = 0; i <= 3; i++)
        {
          std::cout << "Entre a nota " << i + 1 << ": ";
          std::cin >> notas[i];
        }
      calcularMedia();
    }

    std::string pegaNome() const
    {
      return nome;
    }

    void pegaNotas() const
    {
      for (int i = 0; i <= 3; i++)
        std::cout << "Nota " << i + 1 << ": " << notas[i] << std::endl;
    }

    double pegaMedia() const
    {
      return media;
    }

  private:
    void calcularMedia()
    {
      double soma = 0.0;
      for (int i = 0; i <= 3; i++)
        soma += notas[i];
      media = soma / 4;
    }
};

int main(void)
{
  Aluno *aluno = new Aluno();

  std::string nomeAluno;
  std::cout << "Entre o nome do aluno: ";
  std::cin >> nomeAluno;

  aluno->poeNome(nomeAluno);
  aluno->poeNotas();

  std::cout << "\nInformacoes do aluno:\n";
  std::cout << "Nome: " << aluno->pegaNome() << std::endl;
  aluno->pegaNotas();
  std::cout << "Media: " << aluno->pegaMedia() << std::endl;

  delete aluno;

  return 0;
}
