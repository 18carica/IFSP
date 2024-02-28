#include <iostream>

using namespace std;

int main() {
  int VA, VB, VC, NL, BR, TE;
  double PV, PA, PB, PC, PNL, PBR;

  // Leia VA, VB, VC, NL e BR
  cout << "Digite VA, VB, VC, NL e BR: ";
  cin >> VA >> VB >> VC >> NL >> BR;

  // TE recebe VA + VB + VC + NL + BR
  TE = VA + VB + VC + NL + BR;

  // PV recebe (VA + VB + VC) * 100 / TE
  PV = (VA + VB + VC) * 100.0 / TE;

  // PA recebe VA * 100 / TE
  PA = VA * 100.0 / TE;

  // PB recebe VB * 100 / TE
  PB = VB * 100.0 / TE;

  // PC recebe VC * 100 / TE
  PC = VC * 100.0 / TE;

  // PNL recebe NL * 100 / TE
  PNL = NL * 100.0 / TE;

  // PBR recebe BR * 100 / TE
  PBR = BR * 100.0 / TE;

  // Imprima TE, PV, PA, PB, PC, PNL e PBR
  cout << TE << " " << PV << " " << PA << " " << PB << " " << PC << " " << PNL << " " << PBR << endl;

  return 0;
}
