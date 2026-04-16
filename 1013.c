#include<stdio.h>

int main(void){
	int a , b , c , maior ,dif;
	
	scanf("%d" , &a);
	scanf("%d" , &b);
	scanf("%d" , &c);
	
	dif = a - b;
	if(dif < 0)
		dif = dif * -1;
	
	maior = (a + b + dif) / 2;
	
	dif = maior - c;
	if(dif < 0)
		dif = dif * -1;
		
	maior = (maior + c + dif)/2;
	
	printf("%d eh o maior\n" , maior);
	
	return 0;
}
