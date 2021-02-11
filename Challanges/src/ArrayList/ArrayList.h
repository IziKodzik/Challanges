#pragma once
#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

template <typename T>
class ArrayList {

public:
	ArrayList();
	void add(T element);
	int size();
	T get(int index);
	void present();
private:
	int length = 0;
	int capacity;
	T* array;
};

#include "ArrayList.cpp"


#endif

