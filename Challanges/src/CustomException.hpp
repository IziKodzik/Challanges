// using standard exceptions
#ifndef ss
#define ss
#include <iostream>
#include <exception>
using namespace std;

class myexception : public exception
{
    virtual const char* what() const throw()
    {
        return "My exception happened";
    }
} myex;
#endif
