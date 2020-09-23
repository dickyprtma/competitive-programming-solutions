#include <iostream>
#include <stdio.h>
#include <conio.h>

// BUBBLE SORT ALGORITHM
// Bubble sort adalah algoritma untuk melakukan sorting pada array

int main() {

	int kumpulan[6] = {1,7,9,3,2,5};


   // Bubble sort dimulai
   // descending(kecil ke besar) dan ascending (besar ke kecil)
   // < untuk sorting dari yang terkecil dan > utuk sorting dari yang terbesar

   //  * algoritma ini akan lebih mudah dipahami jika
   //    sudah memahami array multidimensi dan matriks 

   for (int i = 0; i < 6; i++){

   	for(int j = 0; j < 6; j++){

      	if(kumpulan[i] < kumpulan[j]){

         	int store = kumpulan[i];
            kumpulan[i] = kumpulan[j];
            kumpulan[j] = store;
         }
      }

   }

   // Tampilkan hasil sorting
   for(int i = 0; i < 6; i++){
   		printf("%d ", kumpulan[i]);
   }

getch();
}
