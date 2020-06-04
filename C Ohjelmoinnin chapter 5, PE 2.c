//C Ohjelmoinnin chapter 5, PE 2

#include<stdio.h>

int main()
{
    
    char juoma;
    int maara;
    
    printf("Juotko kahvia vai teetä (k/t)?");
    juoma = getchar();
    
    printf("Montako kuppia juot päivässä:");
    scanf("%d" , &maara);
    
    if (juoma == 'k' && maara >=0 && maara <=2)
        printf("Et taida juoda paljoa kahvia.");
    
    else if (juoma == 'k' && maara >=3 && maara <=20)
        printf("Juotpa paljon kahvia!");
    
    
    else if (juoma == 't' && maara >=0 && maara <=2)
        printf("Et taida juoda paljoa teetä.");
    
    
    else if (juoma == 't' && maara >=3 && maara <=20)
        printf("Juotpa paljon teetä!");
        
        else printf("Ohjelmassa tapahtunut virhe!");
    
    
    return 0;
    
}