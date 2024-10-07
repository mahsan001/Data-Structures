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
        top = -1;
    }
    ~ Stack (){
        delete[] arr;
        
    }

    int pop ();
    void push(int);
    int Top();
    int size();
    bool isEmpty();
    bool isFull();
};

#endif // End of header guard