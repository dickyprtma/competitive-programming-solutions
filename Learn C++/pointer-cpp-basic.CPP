#include <iostream>
#include <stdio.h>
#include <conio.h>

// PROGRAMMING IS NOT JUST AN SUBJECT TO LEARN
// BUT THAT IS HOBBY AND PART OF LIFE
// UNIQUE THING THAT CREATE LOT OF APP that MAKE HUMANS LIFE EASIER

// =================================================================
// #38 Pointer
// Sumber : Kelas Terbuka
// =================================================================

// Belajar tuh mulai dari definisi
//							              ~ Bang sabda ps
// -----------------------------------------------------------------

// Definisi Pointer
// pointer adalah penunjuk suatu variabel
// pointer wajib memiliki alamat dari variabel yang ditunjuk

// mekanisme pointer bertujuan untuk menghemat memory
// mekanisme pointer juga memungkinkan suatu variabel dalam suatu fungsi
// dapat diakses oleh fungsi yang lain

int main() {

 int x = 10;

 // Address adalah sesuatu yang dimiliki oleh variabel
 // address berguna agar variabel dapat mengakses nilai
 // yang telah ia simpan dimemory.

 printf("Nilai dari x   : %d\n", x);
 printf("Address dari x : %d", &x);

 getch();

}