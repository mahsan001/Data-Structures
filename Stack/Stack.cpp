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

int Stack :: pop(){

    if (this->isEmpty()){

        cout << "Stack is empty" << endl;
        return;

    }
    else {
        int x = arr[top];
        top = top - 1;
        return x;
    }

}

int Stack :: Top(){

    if(this->isEmpty()){
        cout << "Stack is empty" << endl;
        return;

    }
    else{
        return arr[top];
    }


}

int Stack ::No_elements(){

    int x = top;

    return x + 1;
}

bool Stack :: isFull (){
    if (this->No_elements()  == this->Size ){
        return true;
    }
    else
        return false;
}

bool Stack :: isEmpty (){
    if (this->top == -1){
        return true;
    }
    else
        return false;
}


