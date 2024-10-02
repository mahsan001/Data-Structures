#ifndef LINKLIST_H
#define LINKLIST_H
#include <iostream>
using namespace std;


class LinkList{

     public:

    struct Node 
    {
        int data;
        Node *next;
    };

    int *arr;
    

    Node *head;

   

    LinkList (){
        head = NULL;
        
    }

  
    

    void Insert_at_head(int val);
    void Insert(int val);
    void Insert_at_index(int index, int val);
    void Insert_arr(int size);
    void display();
    void Initailize_arr(int size , int vals[]);
    int size();
    void Free();

    void Merge_Sorted(LinkList* [] , int , int);
    void Merge(LinkList *[] , int , int);

    void Delete_at_start();
    void Delete_at_index(int);
};



#endif // End of header guard