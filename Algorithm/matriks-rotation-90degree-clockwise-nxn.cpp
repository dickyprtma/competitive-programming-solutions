#include <iostream>
#include <stdio.h>
#include <conio.h>

// ALGORITMA ROTASI MATRIKS 90 DERAJAT SEARAH JARUM JAM UNTUK N X N

int m, n, kumpulan[100][100];

void input(){
   scanf("%d %d", &m, &n);

   for(int i = 0; i < m; i++){
    	for(int j = 0; j < n; j++) {
         scanf("%d", &kumpulan[i][j]);
      }
   }
}

// Requirements // yang dibutuhkan
// 1. Transpose matriks
// 2. swap the begin and end of element column each row


void putar90Derajat(){

 //Transpose Matriks
 for(int i = 0; i < m; i++){
	for(int j = i; j < n; j++){
   	int temp = kumpulan[i][j];

      kumpulan[i][j] = kumpulan[j][i];
      kumpulan[j][i] = temp;
   }
 }

 //Swap the begin and end of element column each row
 for(int i = 0; i < m; i++){
   	for(int j = 0; j < (n/2) ;j++){
      	int temp = kumpulan[i][j];

         kumpulan[i][j] = kumpulan[i][n-1-j];
         kumpulan[i][n-1-j] = temp;
      }
   }
}



int main(){

	input();
   putar90Derajat();

   printf("\n\n");

   for(int i = 0; i < m; i++){
   	for(int j = 0; j < n; j++){
      	printf("%d ", kumpulan[i][j]);
      }

      printf("\n");
   }

   getch();
}