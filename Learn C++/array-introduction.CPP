#include <iostream>
#include <stdio.h>
#include <conio.h>

int main(){
   int array[5];

   // memberikan nilai pada array
   array[0] = 0;
   array[1] = 1;
   array[2] = 2;
   array[3] = 3;
   array[4] = 4;

   // 1 int = 4 byte jika kita melakukan penambahan
   // pada address atau langsung ke memory
   // ukuran byte pada int tergantung pada
   // sizenya atau data yang dapat ia tampung
   // pada kasus ini array diatas memiliki ukuran 20 byte (5x4)

   printf("%d Nilainya adalah: %d\n", &array[0], array[0]);
   printf("%d Nilainya adalah: %d\n",&array[1],array[1]);
   printf("%d Nilainya adalah: %d\n",&array[2], array[2]);
   printf("%d Nilainya adalah: %d\n",&array[3],array[3]);
   printf("%d Nilainya adalah: %d\n\n",&array[4],array[4]);

   // melakukan update nilai menggunakan address
   // kita coba menambahkan 2 atau 8 byte data kedalam address sehingga
   // jika kita mulai dari 0
   // data yang akan terupdate adalah data pada index ke 2

   // *ptr    |          |   +    | konversi ke byte
   // 1703736 | (0 byte) |   1    |       + 4
   // 1703740 | (4 byte) |   1    |       + 4
   // 1703744 | (8 byte) |  ini   |


   int *ptr = array;
   *(ptr + 2)= 6;

   //melakukan update nilai secara langsung
   array[3] = 10;

   printf("%d Nilainya adalah: %d\n", &array[0], array[0]);
   printf("%d Nilainya adalah: %d\n",&array[1],array[1]);
   printf("%d Nilainya adalah: %d\n",&array[2], array[2]);
   printf("%d Nilainya adalah: %d\n",&array[3],array[3]);
   printf("%d Nilainya adalah: %d\n\n",&array[4],array[4]);

   // untuk mengetahui jumlah byte pada array
   printf("Jumlah array dalam byte adalah: %d\n", sizeof(array));

   // mengetahui data yang dapat ditampung oleh array
   printf("Size dari array adalah: %d", sizeof(array)/sizeof(int));


   getch();

}
