#include <iostream>
#include <stdio.h>
#include <conio.h>

// Note
// Reverse Input Algorithm
// BASIC PROGRAMMING

int main() {

int i=0 ,arr[100];
while(scanf("%d", &arr[i]) != EOF ) {
i = i + 1;
}

for(i = i - 1; i >= 0; i--) {
	printf("%d\n",arr[i]);
}

getch();

}
