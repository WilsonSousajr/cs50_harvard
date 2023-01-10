// Documentation
/*
  * file: binary_search.c
  * author: Wilson Júnior
  * description: a simple binary search program.
*/


/* LINKS */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* END LINKS */

/* DEFINITIONS */
int binarySearch(int arr[], int target, int low, int high); 

/* END DEFINITIONS */

/* MAIN */
int main(void)
{
  int arr[] = {0,1,2,3,4,5,6,7,8,9,10,11,15,20,25,30,35,40,45,50};
  int target = 0;
  int low = 0;
  int high = (sizeof(arr) / sizeof(arr[0])) - 1;
  int resul;


  system("clear");
  printf("### BINARY SEARCH ###\n");

  printf("\nType the target: ");
  scanf("%d", &target);

  resul = binarySearch(arr, target, low, high);

  system("clear");

  if(resul != 0){
    printf("Sucess! Target found at index %d\n", resul);
  }
  else
  {
    printf("Error: Target not found.\n");
  }

  return 0;
}

/* END MAIN */

/* FUNCTIONS */
int binarySearch(int arr[], int target, int low, int high)
{
  if(low > high)
  {
    return false;
  }

  else
  {
    int mid = (low + high) / 2;

    if (target == arr[mid])
    {
      return mid;
    }
    else if (target > arr[mid] )
    {
      return binarySearch(arr, target, mid + 1, high);
    }
    else
    {
      return binarySearch(arr, target, low, mid - 1);
    }
  }
}

/* END FUNCTIONS */