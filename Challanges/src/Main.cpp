#include <iostream>
#include <string>
#include "ArrayList/ArrayList.h"
#include "Exceptions/CustomException.h"

using namespace std;

int main() {

	ArrayList<int>* a = new ArrayList<int>();
	a->add(65);
	a->add(66);
	a->add(67);
	a->add(68);
	a->add(69);
	a->add(80);
	a->add(7);
	a->add(69);
	a->present();
	

	try {
	
		cout << a->get(-1);
		cout << a->get(-1);
		cout << a->get(-1);
		
	}
	catch (CustomException& e) {
		cout << e.what() << endl;
	}
}