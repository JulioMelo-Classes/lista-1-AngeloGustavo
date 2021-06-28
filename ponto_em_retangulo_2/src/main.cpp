/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções
int pt_in_rect ( const Ponto *R1, const Ponto *R2, const Ponto *P ){
  if(P->x > R1->x 
  && P->x < R2->x 
  && P->y > R1->y
  && P->y < R2->y) 
    return INSIDE;
  if(((P->x >= R1->x && P->x <= R2->x)&&((P->y == R1->y)||(P->y == R2->y)))
  ||((P->y >= R1->y && P->y <= R2->y)&&((P->x == R1->x)||(P->x == R2->x))))
    return BORDER; 
  return OUTSIDE;
}
// Coloque aqui qualquer função auxiliar que desejar.

/*não pq você não modularizou usando o function.h, vou considerar 80% uma vez que era um dos objetivos da questão
a indentação daquele while com vários cins está bem ruim também,
nesse caso a prática "melhor" é fazer como eu coloquei pra vc*/

int main( void )
{
  int res,aux;
  Ponto R1,R2,P;
  int x1,y1,x2,y2,px,py;
/*antes*/
/*
  while( cin >> std::ws >> R1.x  
  >> std::ws >> R1.y
  >> std::ws >> R2.x
  >> std::ws >> R2.y
  >> std::ws >> P.x
  >> std::ws >> P.y) {
  */
/*depois
  a ideia é alinhar os parâmetros do cin assim não ficam no mesmo nivel do while
  vc pode colocar as { ali depois do ) mas colocar ela após o bloco deixa ainda mais claro, neste caso*/
  while( cin >> std::ws >> R1.x  
             >> std::ws >> R1.y
             >> std::ws >> R2.x
             >> std::ws >> R2.y
             >> std::ws >> P.x
             >> std::ws >> P.y)
  {
    if(R1.x>R2.x){
      aux = R1.x;
      R1.x = R2.x;
      R2.x = aux;
    }if(R1.y>R2.y){
      aux = R1.y;
      R1.y = R2.y;
      R2.y = aux;
    }

    if(R1.x == R2.x && R1.y == R2.y)
      cout << "invalid\n";
    else{
      res = pt_in_rect(&R1,&R2,&P);
      if(res==0)
        cout << "inside\n";
      else if(res==1)
        cout << "border\n";
      else
        cout << "outside\n";
    }
  }

  return 0;
}
