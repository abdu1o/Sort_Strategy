#include <iostream>
#include "Class.h"
#include "SetStrategy.h"
using namespace std;

int main() 
{
    SortedArray ar;

    BubbleSort bubble;
    ar.SetSortStrategy(&bubble);
    ar.Sort();


    /*SortStrategy* stragega;
    stragega = new BubbleSort();
    
    int size = 10;
    int* arr = new int[size]{23, 1, 0, 5, 45, 12, 7, -1, 10, 2};

    stragega->Sort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }*/
}