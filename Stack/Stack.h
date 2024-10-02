#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;

class Stack {
    private:
        int top;
        int *arr;

    public:
    Stack (int size){

        arr = new int [size];
    }
    ~ Stack (){
        delete[] arr;
    }
};

#endif // End of header guard