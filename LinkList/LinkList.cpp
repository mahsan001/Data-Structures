#include <iostream>
#include "LinkList.h"
using namespace std;

void LinkList::Insert_at_head(int val)
{

    Node *newNode = new Node;
    newNode->data = val;

    if (head == NULL)
    {
        head = newNode;
        newNode->next = NULL;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void LinkList ::Insert(int val)
{
    Node *newNode = new Node;
    newNode->data = val;
    newNode->next = NULL;
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void LinkList ::Insert_at_index(int index, int val)
{

    Node *newNode = new Node;
    newNode->data = val;
    newNode->next = NULL;

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
    temp->next = newNode;
}

void LinkList::display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "Null" << endl;
}

void LinkList::Insert_arr(int size)
{

    if (head == NULL)
    {
        Insert_at_head(arr[0]);
        for (int i = 1; i < size; i++)
        {

            Insert(arr[i]);
        }
        return;
    }

    for (int i = 0; i < size; i++)
    {

        Insert(arr[i]);
    }
}

void LinkList ::Initailize_arr(int size, int vals[])
{
    arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = vals[i];
    }

    Insert_arr(size);
}

int LinkList ::size()
{

    Node *ptr = head;

    int count = 1;
    while (ptr->next)
    {
        ptr = ptr->next;
        count++;
    }

    return count;
}

void LinkList::Merge_Sorted(LinkList *obj[], int no_of_L, int iter)
{

    if (iter == no_of_L)
    {
        return;
    }

    int size = this->size() + obj[iter]->size();
    // cout << "----------------------Testing------------------------" << endl;
    // cout << endl
    //      << "Size of new LinlList will be : " << size << " " << endl;
    // cout << endl
    //      << "current LinlLists are  : " << endl;
    // this->display();
    // obj[iter]->display();
    // cout << "--------------------------------------" << endl;

    int *sort_arr = new int[size];

    Node *ptr1 = this->head;
    Node *ptr2 = obj[iter]->head;

    int i = 0;

    while (ptr1 && ptr2)
    {
        if (ptr1->data < ptr2->data)
        {
            sort_arr[i] = ptr1->data;
            i++;
            ptr1 = ptr1->next;
        }
        else
        {
            sort_arr[i] = ptr2->data;
            i++;
            ptr2 = ptr2->next;
        }
    }

    if (ptr1)
    {
        while (ptr1)
        {
            sort_arr[i] = ptr1->data;
            i++;
            ptr1 = ptr1->next;
        }
    }
    else
    {
        while (ptr2)
        {
            sort_arr[i] = ptr2->data;
            i++;
            ptr2 = ptr2->next;
        }
    }

    this->Free();
    obj[iter]->Free();

    this->Initailize_arr(size, sort_arr);
    iter++;
    delete[] sort_arr;

    this->Merge_Sorted(obj, no_of_L, iter);
}

void LinkList::Free()
{

    Node *current = head; // Start at the head of the list
    Node *temp = nullptr; // To keep track of the next node

    // Traverse the list
    while (current != nullptr)
    {
        temp = current->next; // Save the next node in temp
        delete current;       // Delete the current node
        current = temp;       // Move to the next node
    }

    head = nullptr; // Ensure head is set to nullptr after deletion
}


void LinkList:: Merge (LinkList* obj[] , int no_of_ll , int iter){

    if (iter == no_of_ll){
        return;

    }

    int size = this->size() + obj[iter]->size();
    int *merge_arr = new int[size];

    Node *ptr = this->head;
    int i = 0;

    while (ptr){
        merge_arr[i] = ptr->data;
        i++;
        ptr = ptr->next;
    }
    ptr = obj[iter]->head;
    while (ptr){
        merge_arr[i] = ptr->data;
        i++;
        ptr = ptr->next;
    }

    this->Free();
    obj[iter]->Free();

    this->Initailize_arr(size , merge_arr);
    iter++;

    Merge(obj, no_of_ll, iter);
}

void LinkList :: Delete_at_start (){

    Node *temp = head;
    head = head->next;
    delete temp;
}

void LinkList :: Delete_at_index (int index){

     if (index == 0)
    {
        Delete_at_start();
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
      
        return;
    }

    Node *delNode = temp->next;
    temp->next = temp->next->next;
    delete delNode;
}