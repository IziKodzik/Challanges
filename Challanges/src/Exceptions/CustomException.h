#pragma once
#include <iostream>
using namespace std;
class CustomException : exception {

	string message;
public:
	CustomException(string message) : exception() {
		this->message = message;
	};
	virtual const char* what() throw(){
		return message.c_str();
	}
};
