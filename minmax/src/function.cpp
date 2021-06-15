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

std::pair<int,int> min_max( int V[], std::size_t n )
{  
    int i,min=0,max=n-1; 
    if(min==n)
      min=-1;

    for(i=0; i<n; i++){
      if(V[i]<V[min])
        min=i;
      if(V[i]>=V[max])
        max=i;
    }
  
    return {min, max};
}
