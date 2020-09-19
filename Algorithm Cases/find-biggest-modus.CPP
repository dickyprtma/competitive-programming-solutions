#include <iostream>
#include <stdio.h>
#include <conio.h>

long int arr[100000], i, j, count, l, modus, n;

int main() {

	// penginputan jumlah data yang akan dimasukkan pada arr[]
	scanf("%d", &n);

   // blok penginputan data pada arr[]
	for(i = 0; i < n; i++) {
   	scanf("%d", &arr[i]);
   }


   modus = arr[0], l = 1;


   for(i=0; i < n - 1; i++){

   	if(arr[i] > 0) {
      	count = 1;
         for(j = i + 1; j < n; j++) {

            // this is gate to check
            // a array in index i equal or not to i + 1 or next index of array

         	if(arr[i] == arr[j]) {

            //if same, the next array data will be 0 and count will be + 1
            	arr[j] = 0;
               count = count + 1;
            }
         }

         // if count more than one
         // l equal to count or how much same number when we do check with looping

         if(count > l) {
         	 l = count;
             modus = arr[i];
         } else {
         	if(count == l) {
            	if(arr[i] > modus) {
               	l = count;
                  modus = arr[i];

               }
            }
         }

      }


   }

   printf("%d\n", modus);
   getch();

}