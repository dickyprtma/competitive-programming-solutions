#include <iostream>
using namespace std;

// f(x) = |Ax + B|

int fungsi(int A, int x, int B);
int komposisi(int A, int x, int K, int B);

int main(){
	int A, x, K, B;
	
	scanf("%d %d %d %d", &A, &x, &K, &B);
	cout << komposisi(A, x, K, B);
	cout << endl;
}

int komposisi(int A, int x, int K, int B){
	
	int compResult = 0;
	
	for(int i = 0; i < K; i++){
		compResult = fungsi(A, x, B);
		x = compResult;
	}
	
	return compResult;
}

int fungsi(int A, int x, int B){
	int result = A * x + B;
	
	if(result >= 0){
		result = result;
	} else {
		result = -1 * result;
	}
	
	return result;
}
