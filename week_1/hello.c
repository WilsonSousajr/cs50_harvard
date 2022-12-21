#include <stdio.h>

int main(void){

  char name[20];

  printf("Your name: ");
  scanf("%s", name);
  printf("Hello %s\n", name);
  printf("Hello World!\n");
  return 0;
}