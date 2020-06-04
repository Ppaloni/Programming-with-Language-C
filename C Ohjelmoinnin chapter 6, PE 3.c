//C Ohjelmoinnin chapter 6, PE 3

#include <stdio.h>


int main ()
{
    
    int num;
    float sum=0;
    float n=0;
    
    printf("Ohjelma laskee syötettyjen arvosanojen keskiarvon.\nLopetus negatiivisella kokonaisluvulla.\n" );

    
    while (num != 0) {
        printf("Anna arvosana (4-10):");
        scanf("%d", &num);    
        if (num < 0) {
            break;
        }
        
        else
        {
            sum=sum+num;
            n++;
        }
    }
    
    float media = (sum/n);
    printf("Ohjelmaan syötetty %.f arvosanaa.\n", n);
    printf("Arvosanojen keskiarvo: %.2f", media); 
    return 0;



}