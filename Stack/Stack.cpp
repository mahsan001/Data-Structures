#include <iostream>
#include "Stack.h"
using namespace std;

void Stack:: push (int x){

    if(this->isFull()){

        cout << "Stack is Full" << endl;
        return;
    }
    else {

        top = top + 1;
        arr[top] = x;
    }

}


