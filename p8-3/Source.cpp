#include <iostream>
#include <string>
using namespace std;

int romanCharValue(char r);
int convertRomanToInt(string s);

int main() {
	string romanNum;
	cout << "Enter a roman number: ";
	getline(cin, romanNum);
	cout << romanNum << " = " << convertRomanToInt(romanNum);
}

int romanCharValue(char r) {
	int value;
	switch (r) {
	case 'I':
		value = 1; 	return value;
	case 'V':
		value = 5; 	return value;
	case 'X':
		value = 10;	return value;
	case 'L':
		value = 50;	return value;
	case 'C':
		value = 100; return value;
	case 'D':
		value = 500; return value;
	case 'M':
		value = 1000; return value;
	default:
		return 0;
	}
}

int convertRomanToInt(string s) {
	int total = 0;
	while (s!="") {
		char firstChar = s[0];
		char secChar = s[1];
		int a1 = romanCharValue(firstChar);
		int a2 = romanCharValue(secChar);

		if (a1 >= a2 || s.length() == 1) {
			total += a1;
			s = s.substr(1);
		}
		else {
			total += a2 - a1;
			s = s.substr(2);
		}
	}
		return total;
}