//precompile header
#include "ArrayList.h"
#pragma once
#ifndef _ARRAY_LIST_
#define _ARRAY_LIST_
#include <iostream>
using namespace std;

template <typename T>
ArrayList<T>::ArrayList() {
	this->capacity = 2;
	this->array = new T[this->capacity];
};

template <typename T>
void ArrayList<T>::add(T element){
	cout << this->size() << endl;
	cout << this->capacity << endl;
	cout << "iteration" << endl;
	if (this->size() >= this->capacity) {
		this->capacity *= 2;
		T* tmp_array = new T[this->capacity];
		for (int op = 0; op < this->size; ++op) {
			tmp_array[op] = this->array[op];

		}
	} else {

	}
	cout <<"-----------------------------------------------" << endl;


	++this->length;
};

template <typename T>
int ArrayList<T>::size() {
	return this->length;
};

template <typename T>
T ArrayList<T>::get(int index) {
	return this->array[index];
}

#endif
//-----------------------------------------------





