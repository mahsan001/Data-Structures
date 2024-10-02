#include <iostream>
#include "Class.h"
using namespace std;

int main()
{

    DLL l1;

    int vals[] = {2, 4, 6, 8, 10};
    int vals2[] = {1, 3, 5};
    int vals3[] = {11, 12};

    l1.Initialize_arr(5, vals);

    l1.display();
    l1.display_From_Tail();
}