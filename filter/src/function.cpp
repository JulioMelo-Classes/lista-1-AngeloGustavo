/*! 
 * Remove negative and zero values from an array, preserving the
 * relative order of the original values that will remain in the
 * resulting array.
 * We do not alter the origimal memory associated withe the input
 * array. Rather, we just rearrange the values inside the array
 * and return a pointer to the new 'logical' end of the array,
 * after the processes of eliminating the required elements is
 * finished.
 *
 * @param first Pointer to the beginning of the range we want to filter.
 * @param last Pointer just past the last valid value of the range we want to filter.
 * @return a pointer to the new 'logical' end of the array.
 */
 /*ok*/
int * filter( int * first, int * last )
{
    int cont=0;

    for(int *i=first; i<last; i++)
      if(*i>0)
        cont++;

    for(int *i=first; i<last; i++)
      if(*i<=0)
        for(int *j=i; j<last; j++) //essa indentação aqui é uma boa forma de adicionar bugs no programa =)
          if(*j>0){
            *i=*j;
            *j=0;
            break;
          }
    
    // TODO: substitua o retorno de acordo com a solução. Isso é somente um STUB temporário.
    return first+=cont;
}