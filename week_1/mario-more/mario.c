
#include <stdio.h>

int main(void){   

    int height;

    do{

        printf("Height:");
        scanf("%d", &height);

    } while(height > 8 || height < 1);

    
    for (int i = 0; i < height; i++){
        
        int spaces = height - (i + 1);
        
        for(int j = 0; j < spaces; j++){
            printf(" ");
        }
        
        int stairs = i + 1;

        for(int k = 0; k < stairs; k++){
            printf("#");
        }

        printf("  ");

        for(int l = 0; l < stairs; l++){
            printf("#");
        }
        printf("\n");
    };
    return 0;
}