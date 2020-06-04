//C Ohjelmoinnin chapter 6, PE 1

#include <stdio.h>

int main()
{
    int n;
    int i;
    
    printf("Anna kokonaisluku:");
    scanf("%d", &n);
    
    for(i = 1; i<=n; i++) {
        printf("%d\n", i);
    }
}