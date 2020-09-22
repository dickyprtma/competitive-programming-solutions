#include <iostream>
#include <stdio.h>
#include <conio.h>

// Latihan array

int main(){

   int nilai[10];

   printf(" == Program menampilkan grafik nilai mahasiswa ==\n\n");

   for(int i=0; i <= (sizeof(nilai)/sizeof(int)); i++) {
   	printf("Jumlah mahasiswa dengan nilai ");
   	if(i == 0) {
         printf("0  - 9  : ");
      } else if(i == 10) {
         printf("100     : ");
      } else {
      	printf("%d - %d : ", i * 10 , (i * 10) + 9);
      }
      scanf("%d", &nilai[i]);
   }

   printf("\n=== Grafik Nilai ===\n\n");

   for(int i = 0; i <= (sizeof(nilai)/sizeof(int));i++){
      if(i == 0) {
         printf("0  - 9  : ");
      } else if(i == 10) {
         printf("100     : ");
      } else {
      	printf("%d - %d : ", i * 10 , (i * 10) + 9);
      }

      for(int j = 0; j < nilai[i]; j++) {
      	printf("*");
      }

      printf("\n");
   }



   getch();

}