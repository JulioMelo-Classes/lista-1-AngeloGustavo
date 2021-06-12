#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */
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