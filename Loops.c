#include <stdio.h>

int main(){

int n; 
int i;
int j;

printf("give the depth: ");
scanf("%d", &n);

for (i = n; i >= 1; --i) {
    for (j = 1; j <= i; ++j) {
        printf("%d", j);
    }
    printf("\n");
}
printf(".\n");

for ( i = 1 ; i <= n ; ++i ){
    for ( j = 1 ; j <= i ; ++j ){
        printf("%d", j);
    }
    printf("\n");
}
}