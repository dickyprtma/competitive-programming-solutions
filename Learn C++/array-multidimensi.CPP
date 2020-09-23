#include <iostream>
#include <stdio.h>
#include <conio.h>

int main(){

  // Array multidimensi
  // size dari array multi dimensi adalah b x k

  //			  b  k`      baris      baris       baris    = 3 baris 4 kolom
   int matrik[3][4] = {{2,4,2,4}, {1,5,2,6}, {3,6,9,2}};

   for(int i = 0; i < 3; i ++) {

   	printf("[ ");
   	for(int j = 0; j < 4; j++) {
      	printf("%d ", matrik[i][j]);
      }
      printf("]\n");

   }


   getch();

}