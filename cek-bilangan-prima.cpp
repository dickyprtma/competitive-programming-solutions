#include <iostream>
#include <math.h>

//PRIME NUMBER CHECK ALGORITHM

int main() {
	int x, n, i, j, y;
	scanf("%d", &n);
	for(j=0; j<n; j++) {
		scanf("%d", &x);
		
		for(i=2; i <= trunc(sqrt(x)); i++) {
			if(x % i == 0) {
				y =1;
			}
		}
		
		if(y || x == 1) {
			y = 0;
			printf("BUKAN\n");
		}else {
			printf("YA\n");
		}
	}
	
}
