#include <stdio.h>

int main(void){

  void check(void){

    int arg = 0;

    if(arg == 0){
      for(int i = 0; i <= 5; i++){
        printf("%d\n", i);
      };
    } else{
      for(int i = 0; i <= 10; i++){
        printf("%d\n", i);
      };
    };
  };

  check();
  return 0;
}