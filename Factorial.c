#include <stdio.h>

int main()
{
    int num, fact;
    printf("enter a + int: ");
    scanf("%d", &num);

    int ii;
    fact = 1;
    for( ii = num; ii >= 1; ii-- ){
        fact = fact*ii; // or could be (fact *= ii;)
    }

    printf("the fact of %d is %d\n", num, fact);

    return 0;
}