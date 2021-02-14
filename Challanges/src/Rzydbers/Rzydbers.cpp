#include <iostream>
#include <sstream>
#include "Rzydbers.h"
using namespace std;




void rzydbers() {

	string digits[] = { "M", "CM", "D", "CD", "C", "XC", "L","XL", "X", "IX", "V", "IV", "I" };
	int dividers[] = { 1000,  900, 500,  400, 100,  90,   50, 40,  10,   9,    5,   4    ,1 };
	

	int operand,digit;
	stringstream result;
	do{
		cout << "Enter the number. Number 0 ends task." << endl;
		cin >> digit;
		operand = digit;
		for (int op = 0; operand != 0; ++op) {
			int times = operand / dividers[op];
			operand -= times * dividers[op];
			for (int po = 0; po < times; ++po) 
				result << digits[op];
		}
		cout << result.str() << endl;
		result.str("");
		
	} while (digit != 0);


}


