#include <iostream>
using namespace std;

int getDigit(int number){
	int num2, r, sum=0;
    num2 = number;
    
    // if more 2 digit then sum the all entire digit
    if(number >= 10){
    	
	   while (number > 0) {
        r = number % 10; // 4 
        number = number / 10; // 3
        sum = sum + r; // 4
       }	
       
       return sum;
       
    // if just one digit return itself
	} else {
		return number;
	}
}

int sumOfDoubleEvenPlace(const string& cardNumber) {
 	 int sum;
 	 
	 for(int i = cardNumber.length() - 1; i >= 0;i--){
	 	if(i % 2 == 0){
	 		int num = cardNumber[i] - '0';
	 		num  = num * 2;
	 		
	 		if(num >= 10){
	    	num = getDigit(num);
 			}
			  			
 			sum = sum + num;
		 }
	}
	return sum;
}
 
bool startsWith(const string& cardNumber, const string& substr){
 	 string prefixOfCardNumber;
 	 bool isPrefix = false;
 	 
	 for(int i =0; i < 4;i++){
		prefixOfCardNumber += cardNumber[i];
	}
	
	(prefixOfCardNumber == substr) ? isPrefix = true : isPrefix = false;
	return isPrefix;
 }

int sumOfOddPlace(const string& cardNumber) {
 	 int sum;
 	 
	 for(int i = cardNumber.length() - 1; i >= 0; i--){
	 	if(i % 2 != 0){
			int num = cardNumber[i] - '0';
			sum = sum + num;
		 }
	}
	return sum;
}

int main(){
	string creditCardVisa;
	string creditCardPrefix = "4388";
	int sumA,sumB, result;
	
	cout << "Masukkan nomor kartu kredit : ";
	cin >> creditCardVisa;
	
	if(startsWith(creditCardVisa, creditCardPrefix)){
		sumA = sumOfDoubleEvenPlace(creditCardVisa);
		sumB = sumOfOddPlace(creditCardVisa);
		result = sumB;
		
		if(result % 10 == 0){
			cout << "Selamat, Nomor kartu kredit ini valid";
		} else {
			cout << "Nomor kartu kredit tidak valid";
		}
		
	} else {
		cout << "Nomor kartu kredit tidak valid";
	}
}
