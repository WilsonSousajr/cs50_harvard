/* LIBS */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* END LIBS */

/* MAIN */

int main(void){

  float side_a, side_b, side_c;
  bool isValid(float x, float y, float z);

  system("clear");
  printf("### TRIANGLE ###\n");

  printf("Type side A length: \n");
  scanf("%f", &side_a);
  system("clear");

  printf("Type side B length: \n");
  scanf("%f", &side_b);
  system("clear");

  printf("Type side C length: \n");
  scanf("%f", &side_c);
  system("clear");

  if(isValid(side_a, side_b, side_c) == false)
  {
    printf("### INVALID ###\n");
  }
  else
  {
    printf("### VALID ###\n");
  }

  return 0;

}

/* END MAIN */

/* FUNCTIONS */

bool isValid(float x, float y, float z)
{
  if( x <= 0 || y <= 0 || z <= 0)
  {
    return false;
  }

  else if( x + y < z || y + z < x || z + x < y)
  {
    return false;
  }

  else
  {
    return true;
  }
}

/* END FUNCTIONS */