#include <iostream>
#include <string>

using namespace std;

int countCharTotal(string s, char c) {
  int count = 0;

  for (int i = 0; i < s.size(); i++)
    if (s[i] == c) count++;

  return count;
}

int main(){
	string text;
	char letter;
	
	cout << "Enter a string: ";
	cin >> text ;
	
	cout << "Enter a character : ";
	cin >> letter;
	
	int count = countCharTotal(text, letter);
	
	cout << letter << " appears in " << text << " " << count << " times";
	
}
