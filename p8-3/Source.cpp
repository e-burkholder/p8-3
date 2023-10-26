#include <iostream>
#include <string>
using namespace std;

int romanCharValue(char r);

int main() {
	char romanNum;
	int number;
	cout << "Enter a character to test part 1: ";
	cin >> romanNum;
	number = romanCharValue(romanNum);
	cout << "The value of " << romanNum << " is " << number;
}

int romanCharValue(char r) {
	int value;
	switch (r) {
	case 'I':
		value = 1; break;
	case 'V':
		value = 5; break;
	case 'X':
		value = 10; break;
	case 'L':
		value = 50; break;
	case 'C':
		value = 100; break;
	case 'D':
		value = 500; break;
	case 'M':
		value = 1000; break;
	}
	return value;
}