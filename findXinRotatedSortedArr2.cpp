// Given the roatated sorted array of integer
// which contain distinct elements
// and an integer target , return the index of target if it is in the array
// otherwise return-1

// input:  Array = [3,4,5,1,2]  Target = 4

// Output : 1

#include <iostream>
using namespace std;

int Find_X_in_sortedRotatedArray(int array[], int target, int lo, int hi)
{
    int mid;

    while (lo <= hi)
    {
        mid = (lo + hi) / 2;

        if (array[mid] == target)
        {
            return mid;
        }

        if (array[mid] > array[lo])
        {
            if (target >= array[lo] && target < array[mid])
            {
                hi = mid - 1;
            }
            else
                lo = mid + 1;
        }
        else
        {

            if (target > array[mid] && target <= array[hi])
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{

    int array[] = {7,8,9,1,2,3,4,5,6};
    int hi = 8;
    int lo = 0;
    int target = 9;

    cout << Find_X_in_sortedRotatedArray(array , target , lo , hi) << endl ;




    return 0;
}