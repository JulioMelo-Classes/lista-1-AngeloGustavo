#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], int n )
{  
    int i,min=0,max=n; 

    for(i=0; i<n; i++){
      if(V[i]<min)
        min=i;
      if(V[i]>=max)
        max=i;
    }
    // TODO: adicione o seu código aqui.

    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    return {min, max};
}
