#include <iostream>
#include <stdio.h>
#include <conio.h>

int main(){

int a= 5;

// &b langsung merujuk pada address sehingga
// address a dan address b menjadi sama dan mengakses slot memori yang sama
// sehingga keduanya saling berikatan
// perhatikan pendeklarasian dibawah

int &b = a;

// kita lakukan perubahan nilai pada b
b = 50;

// maka output dari a adalah 50
printf("nilai a baru   : %d\n",a);
printf("address dari a : %d\n", &a);
printf("address daru b : %d\n", &b);

// kok ribet ?
// iya ribet namun reference dan pointer
// sangat diperlukan jika kita ingin menghemat memory

getch();
}