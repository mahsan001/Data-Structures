#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;

class Stack {
    private:
        int top;
        int *arr;
        int Size;

    public:
    Stack (int size){

        arr = new int [size];
        Size = size;
        top = -1;
    }
    ~ Stack (){
        delete[] arr;
        
    }

    int pop ();
    void push(int);
    int Top();
    int No_elements();
    bool isEmpty();
    bool isFull();
};

#endif // End of header guard