#ifndef CLASS_H
#define CLASS_H
#include <iostream>
using namespace std;


class Node {

    public :
        int data;
        Node *next;
        Node *prev;

        Node (int val){
            data = val;
            prev = NULL;
            next = NULL;
        }

};

class DLL{

    public:
        Node *head;
        Node *tail;

        DLL (){
            head = NULL;
            tail = NULL;

        }

        int *arr;

        void Insert_at_head(int);
        void display();
        void display_From_Tail();
        void Insert(int val);
        void Insert_at_index(int, int);
        void Initialize_arr(int , int[]);
        void Insert_arr(int);
};



#endif // End of header guard