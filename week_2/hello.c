#include <stdio.h>

int main(int argc, char *argv[])
{
  if(argc > 1){
    printf("Hello, %s\n",  argv[1]);
  }
  else
  {
    printf("Error: Missing arguments.\n");
    return 1;
  }
  return 0;
}