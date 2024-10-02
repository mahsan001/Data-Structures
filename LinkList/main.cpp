#include <iostream>
#include"LinkList.h"
using namespace std;



int main(){
    LinkList l1;
    
    int vals[]= {2,4,6 ,8,10};

    l1.Initailize_arr(5, vals);


    l1.display();

    l1.Delete_at_start();
    l1.display();
    l1.Delete_at_index(2);
    l1.display();
    l1.Delete_at_index(0);
    l1.display();
}