//#include "function.h"
#include <array>
#include <iterator>
using std::iter_swap;

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
 /*ok*/
template <size_t SIZE>
void reverse( std::array<std::string,SIZE> & arr )
{
    std::string aux="";
    for(int i=0;i<arr.size()/2;i++){
      swap(aux,arr[i]);
      swap(arr[i],arr[arr.size()-i-1]);
      swap(arr[arr.size()-i-1],aux);
    } 
}
