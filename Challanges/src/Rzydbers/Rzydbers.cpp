#include <iostream>
#include <sstream>
#include "Rzydbers.h"
using namespace std;


void parse_to_rome(stringstream& rzbr, int times,int faster) {
	switch (faster)
	{
	case 1000:
		if (times > 4)
			throw out_of_range("Maximum number is 4999");
		
		for (int op = 0; op < times; ++op)
			rzbr << 'M';
		break;

	case 500:
		for (int op = 0; op < times; ++op)
			rzbr << 'D';
		break;
	case 100:
		if (times == 9) {
			rzbr << "CM";
			break;
		}
		if (times == 4) {
			rzbr << "CD";
			break;
		}
		for (int op = 0; op < times; ++op)
			rzbr << 'C';
		break;
	case 50:
		for (int op = 0; op < times; ++op)
			rzbr << 'L';
		break;

	case 10:
		if (times == 9) {
			rzbr << "IX";
			break;
		}
		if (times == 4) {
			rzbr << "IV";
			break;
		}
		for (int op = 0; op < times; ++op)
			rzbr << 'X';
		break;

	case 5:

		for (int op = 0; op < times; ++op)
			rzbr << 'V';
		break;

	case 1:
		if (times == 9) {
			rzbr << "IX";
			break;
		}
		if (times == 4) {
			rzbr << "IV";
			break;
		}
		for (int op = 0; op < times; ++op)
			rzbr << 'I';
		break;
	default:
		break;
	}
}
void rzydbers() {

	int digit = -1;
	string line;
	cout << "Enter the number." << endl;
	cin >> digit;
	for (;digit!=0;) {
		
		int faster = 1000;
		stringstream* rzbr = new stringstream();


		for (int op = 0; faster > 0; ++op) {
			int times = digit / faster;
			digit -= times * faster;
			parse_to_rome(*rzbr, times, faster);
			if (op % 2 == 0)
				faster /= 2;
			else
				faster /= 5;
		}
		cout << rzbr->str() << endl;
		cout << "Enter the number." << endl;
		cin >> digit;

	}
	cout << "Bye." << endl;

}

