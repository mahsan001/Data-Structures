#include <iostream>
#include "Class.h"
using namespace std;

void DLL ::Insert_at_head(int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;

    head->prev = newNode;
    head = newNode;
    return;
}

void DLL::display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "<=>";
        temp = temp->next;
    }
    cout << "Null" << endl;
}

void DLL ::Insert(int val)
{

    if (head == NULL)
    {
        Insert_at_head(val);
        return;
    }

    Node *newNode = new Node(val);

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void DLL ::Insert_at_index(int index, int val)
{
    Node *newNode = new Node(val);

    // If inserting at the head (index 0)
    if (index == 0)
    {
        Insert_at_head(val);
        return;
    }

    Node *temp = head;
    int currentIndex = 0;

    // Traverse to the node just before the desired index
    while (temp != NULL && currentIndex < index - 1)
    {
        temp = temp->next;
        currentIndex++;
    }

    if (temp == NULL)
    {
        // Index is out of bounds
        cout << "Index out of bounds" << endl;
        delete newNode; // Clean up
        return;
    }

    // Insert the new node at the desired index
    newNode->next = temp->next;
    temp->next->prev = newNode;
    newNode->prev = temp;
    temp->next = newNode;
}

void DLL :: Initialize_arr (int size , int vals[]){

    arr = new int[size];

     for (int i = 0; i < size; i++)
    {
        arr[i] = vals[i];
    }

    Insert_arr(size);
}

void DLL :: Insert_arr(int size ){

    for (int i = 0; i < size; i++){

        Insert(arr[i]);
        }

}


void DLL :: display_From_Tail (){

    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << "<=>";
        temp = temp->prev;
    }
    cout << "Null" << endl;

}