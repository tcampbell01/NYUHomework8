#include <iostream>
using namespace std;

int minInArray(int arr[], int arrSize)
{

    int i;
    int lowest_int = arr[0];

    for (i = 0; i < arrSize; i++)
    {
        if (arr[i] < lowest_int)
        {
            lowest_int = arr[i];
        }
    }

    return lowest_int;
}