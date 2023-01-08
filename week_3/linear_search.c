#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  void checkArray(int num, int arrLen, int arr[], int found);
  int list[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  int arrLen = sizeof(list) / sizeof(list[0]);
  int num;
  int found = 0;

  printf("Search in array: ");
  scanf("%d", &num);
  system("clear");
  checkArray(num, arrLen, list, found);
  return 0;
}

void checkArray(int num, int arrLen, int arr[], int found)
{
  int index; 
  for(int i = 0; i < arrLen; i++)
  {
    if(arr[i] == num)
    {
      found = 1;
      index = i;
      break;
    }
  }

  if(found == 1)
  {
    printf("\nElement %d found at index %d\n", num, index);
  }
  else{
    printf("\nElement %d does not found in array.\n", num);
  }
}