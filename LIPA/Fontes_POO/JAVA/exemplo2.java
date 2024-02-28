import java.util.Scanner;

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

class Aluno extends Sala 
{
  private String nome;
  private double[] notas = new double[4];
  private double media;

  public void poeNome(String nome) 
  {
    this.nome = nome;
  }

  public void poeNotas() 
  {
    Scanner scanner = new Scanner(System.in);
    for (int i = 0; i <= 3; i++) 
      {
        System.out.print("Entre a nota " + (i + 1) + ": ");
        notas[i] = scanner.nextDouble();
      }
    scanner.close();
    calcularMedia();
  }

  public String pegaNome() 
  {
    return nome;
  }

  public void pegaNotas() 
  {
    for (int i = 0; i <= 3; i++)
      System.out.println("Nota " + (i + 1) + ": " + notas[i]);
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

public class Main 
{
  public static void main(String[] args) 
  {
    Aluno aluno = new Aluno();
    int numeroSala;
    Scanner scanner = new Scanner(System.in);

    String nomeAluno;
    System.out.print("Entre o nome do aluno: ");
    nomeAluno = scanner.nextLine();
    aluno.poeNome(nomeAluno);

    System.out.print("Entre o numero da sala: ");
    numeroSala = scanner.nextInt();
    aluno.poeSala(numeroSala);

    aluno.poeNotas();

    System.out.println("\nInformacoes do aluno:");
    System.out.println("Nome: " + aluno.pegaNome());
    System.out.println("Sala: " + aluno.pegaSala());
    aluno.pegaNotas();
    System.out.println("Media: " + aluno.pegaMedia());

    scanner.close();
  }
}
