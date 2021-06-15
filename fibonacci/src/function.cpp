#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{      
    int n1=1,n2=1,prox; 
    std::vector <unsigned int> saida;

    while (n1<n){
      saida.push_back(n1);
      prox=n1+n2;
      n1=n2;
      n2=prox;
    }
    
    return saida;
}
