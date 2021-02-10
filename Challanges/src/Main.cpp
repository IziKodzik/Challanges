#include "ArrayList.h"

int main() {

	ArrayList<char>* a = new ArrayList<char>();
	a->add(65);
	a->add(66);
	a->add(67);
	a->add(68);
	a->add(69);
	a->add(80);
	a->add(7);
	a->add(69);
	a->present();
}