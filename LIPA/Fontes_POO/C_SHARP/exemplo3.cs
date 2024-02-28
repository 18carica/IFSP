using System;

class Sala
{
  protected int sala;

  public void poeSala(int sala)
  {
    this.sala = sala;
  }

  public int pegaSala()
  {
    return sala;
  }
}

class Turma
{
  private char turma;

  public void poeTurma(char turma)
  {
    this.turma = turma;
  }

  public char pegaTurma()
  {
    return turma;
  }
}

class Aluno : Sala
{
  private string nome;
  private double[] notas = new double[4];
  private double media;
  private Turma turmaAluno = new Turma(); // Heranca multipla por composicao

  public void poeNome(string nome)
  {
    this.nome = nome;
  }

  public void poeNotas()
  {
    for (int i = 0; i <= 3; i++)
    {
      Console.Write("Entre a nota " + (i + 1) + ": ");
      notas[i] = Convert.ToDouble(Console.ReadLine());
    }
    calcularMedia();
  }

  public string pegaNome()
  {
    return nome;
  }

  public void pegaNotas()
  {
    for (int i = 0; i <= 3; i++)
      Console.WriteLine("Nota " + (i + 1) + ": " + notas[i]);
  }

  public double pegaMedia()
  {
    return media;
  }

  public void poeTurma(char turma)
  {
    turmaAluno.poeTurma(turma);
  }

  public char pegaTurma()
  {
    return turmaAluno.pegaTurma();
  }

  private void calcularMedia()
  {
    double soma = 0.0;
    for (int i = 0; i <= 3; i++)
      soma += notas[i];
    media = soma / 4;
  }
}

class Program
{
  static void Main(string[] args)
  {
    Aluno aluno = new Aluno();
    int numeroSala;
    char turmaAluno;

    string nomeAluno;
    Console.Write("Entre o nome do aluno: ");
    nomeAluno = Console.ReadLine();
    aluno.poeNome(nomeAluno);

    Console.Write("Entre o numero da sala: ");
    numeroSala = Convert.ToInt32(Console.ReadLine());
    aluno.poeSala(numeroSala);

    Console.Write("Entre a turma do aluno: ");
    turmaAluno = Console.ReadLine()[0];
    aluno.poeTurma(turmaAluno);

    aluno.poeNotas();

    Console.WriteLine("\nInformacoes do aluno:");
    Console.WriteLine("Nome: " + aluno.pegaNome());
    Console.WriteLine("Sala: " + aluno.pegaSala());
    Console.WriteLine("Turma: " + aluno.pegaTurma());
    aluno.pegaNotas();
    Console.WriteLine("Media: " + aluno.pegaMedia());
  }
}
