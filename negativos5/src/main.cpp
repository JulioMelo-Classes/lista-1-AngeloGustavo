#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int i,n,num,qtd=0;
    
    for(i=0;i<5;i++){
      cin >> num;
      if(num<0){
        qtd++;
      }
    }

    cout << qtd <<"\n";

    return 0;
}
