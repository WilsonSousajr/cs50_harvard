#include <stdio.h>
#include <stdlib.h>

int main(void){

  float side_a, side_b, side_c;

  int isValid(float side_a, float side_b, float side_c){
    if((side_a + side_b) >= side_c)
    {
      return 0;
    }
    else if((side_b + side_c) >= side_a)
    {
      return 0;
    }
    else if((side_c + side_a) >= side_b)
    {
      return 0;
    }
    else{
      return 1;
    }
  }

  printf("### TRIANGLE ###\n");

  do
  {

    printf("Type side a: ");
    scanf("%f", &side_a);

    system("clear");

  }while(side_a <= 0);

  do
  {

    printf("Type side b: ");
    scanf("%f", &side_b);

    system("clear");

  }while(side_b <= 0);

  do
  {

    printf("Type side c: ");
    scanf("%f", &side_c);

    system("clear");

  }while(side_c <= 0);
  
  
  if("%d", isValid(side_a, side_b, side_c) != 0)
  {
    printf("### INVALID ###\n");
  }
  else
  {
    printf("### VALID ###\n");
  }

  return 0;
}