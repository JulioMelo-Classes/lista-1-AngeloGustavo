/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
  int m,n,i,soma;

  while( cin >> std::ws >> m  
  >> std::ws >> n){
    soma=0;

    if(n==0)
      cout << m <<"\n";
    else if(n>0){
      for(i=m; i<m+n; i++)
        soma+=i;
      cout << soma <<"\n";
    }else{
      for(i=m; i>m+n; i--)
        soma+=i;
      cout << soma <<"\n";
    }
  }

  return 0;
}
