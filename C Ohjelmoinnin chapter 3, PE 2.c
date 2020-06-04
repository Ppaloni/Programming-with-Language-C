//C Ohjelmoinnin chapter 3, PE 2

#include <stdio.h>

int main()
{ 

	
	float euronkurssi;
	float markka;
	float eurot;
	
	printf("Syötä jokin markkamäärä:");
	scanf("%f", &markka);
		
	euronkurssi = 5.94573;
	
	eurot = markka / euronkurssi;
	
	
	printf("Markat euroina:%.2f ", eurot);
	
}
	