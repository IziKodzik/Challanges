//precompile header
#pragma once
#ifndef _ARRAY_LIST_
#define _ARRAY_LIST_
#include "ArrayList.h"
#include <iostream>
using namespace std;

template <typename T>
ArrayList<T>::ArrayList() {
	this->capacity = 2;
	this->array = new T[this->capacity];
};

template <typename T>
void ArrayList<T>::add(T element){

	if (this->size() >= this->capacity) {
		this->capacity *= 2;
		T* tmp_array = new T[capacity];
		for (int i = 0; i < this->size(); ++i) {
			tmp_array[i] = this->array[i];
		}
		this->array = tmp_array;
	}
	this->array[this->size()] = element;
	++this->length;
};

template <typename T>
int ArrayList<T>::size() {
	return this->length;
};

template <typename T>
T ArrayList<T>::get(int index) {
	if (index < 0 || index >= this->size())
		throw - 1;
	return this->array[index];
}

template <typename T>
void ArrayList<T>::present() {


	for (int i = 0; i < this->size(); ++i)
		cout << "[" << this->array[i] << "]";
	
	cout << endl;
}

#endif
//-----------------------------------------------





