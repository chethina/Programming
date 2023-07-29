#include <stdio.h>

#define MAX_SiZE 100  //Maximum array size

int main()
{
  int arr[MAX_SiZE];
  int size, i, toSearch, found, position;
  
  //Input the size of the array
  printf("Enter the size of array? ");
  scanf("%d", &size);
  
  /* Input elements of array */
  printf("Enter elements in array, ");
  for(i=0; i<size; i++)
  {
    printf("\nElement in Position %i : ", i+1);
    scanf("%d", &arr[i]);
  }

  printf("\nEnter element to search: ");
  scanf("%d", &toSearch);

  /*Assume that elements does not exists in array */
  found = 0;
  
  for(i=0; i<size; i++)
    {
      /*
        If element is found in array then raise found flag
        and terminate from loop
      */
      if(arr[i] == toSearch){
        printf("\n%d is found at position %d", toSearch,  i + 1);
        found = 1;
        }
    if(found == 0){
        printf("\n%d is not found in the array", toSearch);
    }
      }
        
        
    
  
    /*
      If elements is not found in array
    */


  return 0;
}
 
