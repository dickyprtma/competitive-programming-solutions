#include <stdio.h>

void primeFactorization(int &x);

int main(){
	int x;
	scanf("%d", &x);
	primeFactorization(x);
}

void primeFactorization(int &x){
	int divisor = 2;
	int power = 0;
	
	while(divisor < x){
		if(x % divisor == 0){
			int pow = 0;
			while(x % divisor == 0){
				x = x/divisor;
				pow++;
			}
			
			if(pow != 1){
			   printf("%d^%d", divisor, pow);	
			} else{
			   printf("%d", divisor);	
			}
			
			if(x  != 1){
				printf(" x ");
			}
		} else {
			divisor++;
		}
	}
	if(x != 1){
		printf("%d", x);	
	}
	printf("\n");
}









