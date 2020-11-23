#include <iostream>
#include <stdio.h>

int reverse(int &x);

int main(){
	int a,b,c, reversedA, reversedB, reversedC;
	
	scanf("%d %d", &a, &b);
	reversedA = reverse(a);
	reversedB = reverse(b);
	
	c = reversedA + reversedB;
	reversedC = reverse(c);
	printf("%d\n", reversedC);
}

// a' + b' = c
// hasil akhir c'

int reverse(int &x){
	int temp = x; // 230
	int ret = 0; 
	
	while(temp > 0){
		ret = (ret * 10) + (temp % 10);
		temp = temp / 10; 
	}
	return ret;
}
