#include <iostream>
#include <math.h>

int main() {
  float NA, NB, qa, qb, q, O,OA, OB;
  
  std::cout << "Insert q_A, N_A, N_B and the total energy q\n";
  std::cin >> qa >> NA >> NB >> q;

  if(qa>q){
    return 1;
  }
  
  qb = q-qa;

  OA = tgamma(NA+qa-1+1)/tgamma(qa+1)/tgamma(NA-1+1);
  OB = tgamma(NB+qb-1+1)/tgamma(qb+1)/tgamma(NB-1+1);
  O = OA*OB;


  std::cout << "The multiplicity of the macrostate, composed by system A ("<< NA <<" oscillators) with energy q_A = "<< qa <<" and system B ("<< NB <<" oscillators) with energy q_B = "<< qb <<", is "<< O <<"\n"<< std::endl;
}
