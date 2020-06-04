//C Ohjelmoinnin chapter 5, PE 1

#include <stdio.h>


int main()
{
    
    int kokonaisluku;
    
    printf("Anna kokonaisluku:");
    scanf("%d", &kokonaisluku);
    
    if (kokonaisluku % 2 == 0)
        printf("Luku %d on parillinen.", kokonaisluku);
    
    else 
        printf("\nLuku %d on pariton.", kokonaisluku);
    
    return 0;
    
    
    
}