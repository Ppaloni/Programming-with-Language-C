// C Ohjelmoinnin chapter 2, PE 2

#include <stdio.h>

int main()
{
    int eka_luku, nelio;
    
    printf("Anna kokonaisluku:");
    scanf("%d" , &eka_luku);
    
    nelio = eka_luku * eka_luku;
    
    printf("Antamasi luvun neliö on %d\n", nelio);
    
    return 0;
}
