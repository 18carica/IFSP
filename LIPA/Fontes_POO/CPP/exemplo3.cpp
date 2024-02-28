#include <iostream>
#include <string>

class Sala
{
  protected:
    int sala;

  public:
    void poeSala(int sala)
    {
      this->sala = sala;
    }

    int pegaSala() const
    {
      return sala;
    }
};

class Turma
{
  private:
    char turma;

  public:
    void poeTurma(char turma)
    {
      this->turma = turma;
    }

    char pegaTurma() const
    {
      return turma;
    }
};

class Aluno : public Sala, public Turma
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

    void poeNotas() {
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
  Aluno aluno;
  int numeroSala;
  char turmaAluno;

  std::string nomeAluno;
  std::cout << "Entre o nome do aluno: ";
  std::cin >> nomeAluno;
  aluno.poeNome(nomeAluno);

  std::cout << "Entre o numero da sala: ";
  std::cin >> numeroSala;
  aluno.poeSala(numeroSala);

  std::cout << "Entre a turma do aluno: ";
  std::cin >> turmaAluno;
  aluno.poeTurma(turmaAluno);

  aluno.poeNotas();

  std::cout << "\nInformacoes do aluno:\n";
  std::cout << "Nome: " << aluno.pegaNome() << std::endl;
  std::cout << "Sala: " << aluno.pegaSala() << std::endl;
  std::cout << "Turma: " << aluno.pegaTurma() << std::endl;
  aluno.pegaNotas();
  std::cout << "Media: " << aluno.pegaMedia() << std::endl;

  return 0;
}
