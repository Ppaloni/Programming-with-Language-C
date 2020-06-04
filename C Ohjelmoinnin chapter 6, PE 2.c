//C Ohjelmoinnin chapter 6, PE 2

#include <stdio.h>

int main() 
{
	
	int n;
	long long kertoma = 1;
	
	printf("Anna kokonaisluku:");
	scanf("%d", &n);
	
	for(int i = 1; i <=n; i++){
		
		kertoma *= i;
		
	}
	
	printf("Luvun %d\n" , n," kertoma on ", kertoma);
	return 0;
}