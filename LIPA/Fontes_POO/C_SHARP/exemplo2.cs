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

class Aluno : Sala
{
  private string nome;
  private double[] notas = new double[4];
  private double media;

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

    string nomeAluno;
    Console.Write("Entre o nome do aluno: ");
    nomeAluno = Console.ReadLine();
    aluno.poeNome(nomeAluno);

    Console.Write("Entre o número da sala: ");
    numeroSala = Convert.ToInt32(Console.ReadLine());
    aluno.poeSala(numeroSala);

    aluno.poeNotas();

    Console.WriteLine("\nInformacoes do aluno:");
    Console.WriteLine("Nome: " + aluno.pegaNome());
    Console.WriteLine("Sala: " + aluno.pegaSala());
    aluno.pegaNotas();
    Console.WriteLine("Media: " + aluno.pegaMedia());
  }
}
