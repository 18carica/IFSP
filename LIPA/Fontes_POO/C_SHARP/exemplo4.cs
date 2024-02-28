using System;

class Program
{
  class CLS_PAI
  {
    public virtual void EXECUTA()
    {
      Console.WriteLine("Acao executada na classe-pai");
    }
  }

  class CLS_FILHO : CLS_PAI
  {
    public override void EXECUTA()
    {
      Console.WriteLine("Acao executada na classe-filho");
    }
  }

  static void Main()
  {
    CLS_PAI PAI = new CLS_PAI();
    CLS_FILHO FILHO = new CLS_FILHO();
    CLS_PAI ptrPAI;

    PAI.EXECUTA();

    FILHO.EXECUTA();

    ptrPAI = FILHO; // PAI ← FILHO

    ptrPAI.EXECUTA();

    ptrPAI = PAI; // PAI ← ""

    PAI.EXECUTA();
  }
}
