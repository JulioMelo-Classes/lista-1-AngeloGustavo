1/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main( void )
{
  double x,r1,r2,r3,r4,fora,total;
  r1=r2=r3=r4=fora=total=0;

  while( cin >> std::ws >> x) {
    if(x>=0 && x<25)
      r1++;
    else if(x>=25 && x<50)
      r2++;
    else if(x>=50 && x<75)
      r3++;
    else if(x>=75 && x<100)
      r4++;
    else
      fora++;
    total++;
  }
  std::cout << std::setprecision(4) << (100/total)*r1 <<" ";
  std::cout << std::setprecision(4) << (100/total)*r2 <<" ";
  std::cout << std::setprecision(4) << (100/total)*r3 <<" ";
  std::cout << std::setprecision(4) << (100/total)*r4 <<" ";
  std::cout << std::setprecision(4) << (100/total)*fora <<"\n";

  return 0;
}
