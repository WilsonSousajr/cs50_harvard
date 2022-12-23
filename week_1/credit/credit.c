#include <stdio.h>

int main(void) 
{

    long long num_card, current_num, divider = 10;
    int sum1 = 0, sum2 = 0, total_sum = 0, cont = 0;

    do
    {

        printf("Card number:");
        scanf("%lld", &num_card);
        printf("\n");

    }while(num_card <= 0);

    current_num = num_card;

    while (current_num > 0)
    {

        int last_digit = current_num % 10;
        sum1 = sum1 + last_digit;
        current_num = current_num / 100;

    }

    current_num = num_card / 10;

    while(current_num > 0)
    {

        int last_digit = current_num % 10;
        int mult = last_digit * 2;
        sum2 = sum2 + (mult % 10) + (mult / 10);
        current_num = current_num / 100;

    }

    total_sum = sum1 + sum2;

    current_num = num_card;

    while(current_num != 0)
    {

        current_num = current_num / 10;
        cont++;
        
    }

    for(int i = 0; i < cont - 2; i++)
    {

        divider = divider * 10;

    }

    int first_digit = num_card / divider;
    int two_first = num_card / (divider / 10);

    if(total_sum % 10 == 0)
    {
        if(first_digit == 4 && (cont == 13 || cont == 16))
        {
            printf("VISA\n");
        }
        else if((two_first == 34 || two_first == 37) && cont == 15)
        {
            printf("AMEX\n");
        }
        else if((two_first > 50 && two_first < 56) && cont == 16)
        {
            printf("MASTERCARD\n");
        }
        else{
            printf("INVALID\n");
        }
    }
    else{
        printf("INVALID\n");
    }
    
    return 0;
}