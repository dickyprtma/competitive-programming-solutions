#include <iostream>
#include <stdio.h>

int i, j, k, n, m, p;
int kumpulanA[100][100], kumpulanB[100][100], kumpulanC[100][100];

void input(){
	
	scanf("%d %d %d", &n, &m, &p);
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &kumpulanA[i][j]);
		}
	}
	
	for(i = 0; i < m; i++){
		for(j = 0; j < p; j++){
			scanf("%d", &kumpulanB[i][j]);	
		}
	}
}

void matrixMult(){
	for(i = 0; i < n; i++){
		for(j = 0; j < p; j++){
			for(k = 0; k < m; k++){
				kumpulanC[i][j] = kumpulanC[i][j] + kumpulanA[i][k] * kumpulanB[k][j];
			}
		}
	}	
}

void output(){
	for(i = 0; i < n; i++){
		for(j = 0; j < p; j++){
			if(j > 0){
				printf(" ");
			}
			if(j == p - 1) {
				printf("%d", kumpulanC[i][j]);
			} else {
				printf("%d", kumpulanC[i][j]);
			}
		}
		printf("\n");
	}	
}

int main(){
	input();		
	matrixMult();
	output();	
}
