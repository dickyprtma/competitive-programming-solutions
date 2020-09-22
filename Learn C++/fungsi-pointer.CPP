#include <iostream>
#include <stdio.h>
#include <conio.h>

// fungsi kuadrat menggunakan parameter int pointer
// tujuannya agar dapat menghemat memory
// sehingga data dimuat dalam address yang sama

void kuadrat(int *a){
	printf("Kuadrat dari %d : %d\n\n", *a, (*a) * (*a));
}

int pengurangan(int *a, int *b){
 return *a - *b;
}

int main() {
int x = 10;
int y = 5;

// pada fungsi yang memiliki parameter int Pointer
// kita tidak dapat langsung memberikan valuenya
// kita hanya dapat memberikan argumen dengan
// variabel yang telah kita deklarasikan dengan format &var

  kuadrat(&x);
  int result = pengurangan(&x, &y);
  printf("%d", result);
  getch();

}