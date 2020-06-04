// C Ohjelmoinnin chapter 3, PE 1

#include <stdio.h>

int main()
{ 
    int kokonaisluku;
    float desimaaliluku;
    
    printf("Anna kokonaisluku:");
    scanf("%d" , &kokonaisluku);
    
    printf("Anna desimaaliluku:");
    scanf("%e" , &desimaaliluku);
    
    printf("Syöttämäsi kokonaisluku: %d\n", kokonaisluku);
    printf("Syöttämäsi desimaaliluku kahden desimaalin tarkkuudella: %.2f\n", desimaaliluku);

    return 0;
}