import java.util.Scanner;

class Sala {
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

class Turma {
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

class Aluno extends Sala 
{
  private String nome;
  private double[] notas = new double[4];
  private double media;
  private Turma turmaAluno = new Turma(); // Heranca multipla por composicao

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
    calcularMedia();
    scanner.close();
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

  public void poeTurma(char turma) 
  {
    turmaAluno.poeTurma(turma);
  }

  public char pegaTurma() {
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

public class Main 
{
  public static void main(String[] args) 
  {
    Aluno aluno = new Aluno();
    int numeroSala;
    char turmaAluno;

    Scanner scanner = new Scanner(System.in);

    String nomeAluno;
    System.out.print("Entre o nome do aluno: ");
    nomeAluno = scanner.nextLine();
    aluno.poeNome(nomeAluno);

    System.out.print("Entre o numero da sala: ");
    numeroSala = scanner.nextInt();
    aluno.poeSala(numeroSala);

    System.out.print("Entre a turma do aluno: ");
    turmaAluno = scanner.next().charAt(0);
    aluno.poeTurma(turmaAluno);

    aluno.poeNotas();

    System.out.println("\nInformacoes do aluno:");
    System.out.println("Nome: " + aluno.pegaNome());
    System.out.println("Sala: " + aluno.pegaSala());
    System.out.println("Turma: " + aluno.pegaTurma());
    aluno.pegaNotas();
    System.out.println("Media: " + aluno.pegaMedia());

    scanner.close();
  }
}
