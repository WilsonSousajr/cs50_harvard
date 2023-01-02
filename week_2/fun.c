#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){

  int num1, num2;

  int mult(int num1, int num2){
    int resul = num1 * num2;
    return resul;
  }

  printf("##### CALCULATOR #####\n");
  printf("\n");
  printf("Type number 1: ");
  scanf("%d", &num1);
  system("clear");
  printf("Type number 2: ");
  scanf("%d", &num2);
  system("clear");
  printf("Calculating.");
  printf(".");
  printf(".\n");
  sleep(2);
  system("clear");
  printf("##### RESULT #####\n");
  printf("%d\n",mult(num1, num2));

  return 0;
}