// C Ohjelmoinnin chapter 4, PE 1

#include <stdio.h>

int main()
{ 

	
	int luku1;
	int luku2;
	int summa;
	int erotus;
	int kerto;
	
	printf("Anna eka luku:");
	scanf("%d", &luku1);
	
	printf("Anna toka luku:");
	scanf("%d", &luku2);
	
	summa = luku1 + luku2;
	erotus = luku1 - luku2;
	kerto = luku1 * luku2;
	
	
	printf("\n%d+%d=%d", luku1,luku2,summa);
	printf("\n%d-%d=%d", luku1,luku2,erotus);
	printf("\n%d*%d=%d", luku1,luku2,kerto);
	
	
}
