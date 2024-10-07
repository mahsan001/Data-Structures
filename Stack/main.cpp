#include<iostream>
#include "Stack.h"

using namespace std;

int main() {
    // Create a stack of size 5
    Stack myStack(5);

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Print the top element
    cout << "Top element: " << myStack.Top() << endl;  // Should print 30

    // Pop an element
    cout << "Popped element: " << myStack.pop() << endl;  // Should print 30

    // Check the top element after popping
    cout << "Top element after pop: " << myStack.Top() << endl;  // Should print 20

    // Check the number of elements in the stack
    cout << "Number of elements: " << myStack.No_elements() << endl;  // Should print 2

    // Check if the stack is empty or full
    cout << "Is the stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is the stack full? " << (myStack.isFull() ? "Yes" : "No") << endl;

    // Push more elements
    myStack.push(40);
    myStack.push(50);
    myStack.push(60);  // This should fill the stack

    // Try pushing when the stack is full
    cout << "Attempting to push on a full stack: ";
    myStack.push(70);  // Should indicate that the stack is full

    return 0;
}
