public class Main {
	
  public static class CLS_CALCULO {
    
    public int SOMAR(int A, int B) {
      return A + B;
    }

    public double SOMAR(double A, double B) {
      return A + B;
    }
    
  }

  public static void main(String[] args) {
	  
    CLS_CALCULO OPERACAO = new CLS_CALCULO();

    System.out.println(OPERACAO.SOMAR(1.3, 2.7));
    System.out.println(OPERACAO.SOMAR(2, 2.5));
    System.out.println(OPERACAO.SOMAR(1.5, 6));
    System.out.println(OPERACAO.SOMAR(4, 2));
	
  }
  
}
