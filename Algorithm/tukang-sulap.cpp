#include <stdio.h>

// SANGAT PENTING !!
/**
	Sebelum melakukan input kedalam suatu variabel bertipe data char dengan method scanf
	jangan lupa menambahkan spasi pada awalnya jika tidak, ya error
	contoh :
	scanf(" %c", letter);
*/

int arrA[1000], arrB[1000];
void sulap(char &barisA, int &indexX, char &barisB, int &indexY);

int main(){
	int i, n, t, x, y;
	char rowA, rowB;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &arrA[i]);
	}
	
	for(i = 0; i < n; i++){
		scanf("%d", &arrB[i]);
	}
	
	scanf("%d", &t);
	for(i = 0; i < t; i++){
		scanf(" %c %d %c %d", &rowA, &x, &rowB, &y);
		sulap(rowA, x, rowB, y);	
	}
	
	
	
	for(i = 0; i < n; i++){
		if(i > 0){
			printf(" ");
		}
		if(i == (n - 1)){
			printf("%d", arrA[i]);
		}
		else {
			printf("%d", arrA[i]);
		}
	}
	printf("\n");
	for(i = 0; i < n; i++){
		if(i > 0){
			printf(" ");
		}
		if(i == (n - 1)){
			printf("%d", arrB[i]);
		}
		else {
			printf("%d", arrB[i]);
		}
	}
	printf("\n");
}

void sulap(char &barisA, int &indexX, char &barisB, int &indexY){
	int temp;
	
	if(barisA == 'A' && barisB == 'A'){
		temp = arrA[indexX - 1];
		arrA[indexX - 1] = arrA[indexY - 1];
		arrA[indexY - 1] = temp;	 
	}
	if(barisA == 'A' && barisB == 'B'){
		temp = arrA[indexX - 1];
		arrA[indexX - 1] = arrB[indexY - 1];
		arrB[indexY - 1] = temp;
	}
	if(barisA == 'B' && barisB == 'A'){
		temp = arrB[indexX - 1];
		arrB[indexX - 1] = arrA[indexY - 1];
		arrA[indexY - 1] = temp;
	}
	if(barisA == 'B' && barisB == 'B'){
		temp = arrB[indexX - 1];
		arrB[indexX - 1] = arrB[indexY - 1];
		arrB[indexY - 1] = temp;
	}
}
