#include <stdio.h>

int main(){

    int num = 0, i , rem, flag = 0;

    while(num != -1);
    {
        printf("please enter a number: ");
        scanf("%d", &num);

        if(num != -1)
        {
            for( i = 2; i <= num/2; i++)
            {
                rem = num%i
                if( rem == 0 )
                {
                flag = 0;
                printf("number is not a prime number\n");
                break;
            }
            else{
                flag = 1;
            }
        }
        {
        if(flag == 1)
        {
            printf("")
        }
        }
    }
