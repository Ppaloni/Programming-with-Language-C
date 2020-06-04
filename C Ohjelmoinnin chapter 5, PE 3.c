//C Ohjelmoinnin chapter 5, PE 3

#include <stdio.h>

int main()
{
    
    int laskutoimitus;
    int luku;
    int luku2;
    
    printf("1: vähennyslasku\n");
    printf("2: yhteenlasku\n");
    printf("3: kertolasku\n");
    
    printf("Valitse toiminto:");
    scanf("%d", &laskutoimitus);
    
    printf("Anna eka luku:");
    scanf("%d", &luku);
    
    printf("Anna toka luku:");
    scanf("%d", &luku2);
    
    if (laskutoimitus == 1) 
        printf("%d-%d=", luku,luku2);
    
    else if (laskutoimitus == 2) 
        printf("%d+%d=", luku,luku2);
    
    else if (laskutoimitus == 3) 
        printf("%d*%d=", luku,luku2);
        
    switch(laskutoimitus)
    {
        case 1:
        printf("%d" , luku-luku2);
        break;
        
        case 2:
        printf("%d" , luku+luku2);
        break;
        
        case 3:
        printf("%d" , luku*luku2);
        break;
    }
}