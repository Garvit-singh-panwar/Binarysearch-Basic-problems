// A peak element is an element that is strictly greater than its neighbours
// given a 0-indexed integer array nums
// find a peak element and return its indx
// if the array contain multiple peaks
// return the indx to any of the peak
// you may imagine that nums[-1] = nums[n] = -Infinity
// in other words , an element is always considered to be strictly greater than a neighbour that is outside the array

// Input: Array = [1,2,1,2,6,10,3];

// Output :
// Either indx 1 or indx 5 are the correct output . at indx 1,2 is the peak melement and at indx 5,10 is the peak element

#include <iostream>
using namespace std;

int findpeak(int array[], int lo, int hi)
{
    int ans = -1;
    int last = hi;
    int mid;

    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        if (mid == 0)
        {
            if (array[mid] > array[mid + 1])
            {
                return mid;
            }
            else
            {
                return mid + 1;
            }
        }
        else if (mid == last)
        {
            if (array[mid] > array[mid - 1])
            {
                return mid;
            }
            else
            {
                return mid - 1;
            }
        }
        else
        {
            if(array[mid] > array[mid-1] && array[mid] > array[mid+1])
            {
                return mid;
            }
            else if(array[mid] > array[mid-1])
            {
                lo = mid+1;
            }
            else
            {
                hi = mid-1;
            }

        }
    }

    return ans;
}

int main()
{

int array[] = {1,2,1,2,6,10,3};
int hi= 6;
int lo = 0;
cout << findpeak(array, lo , hi) << endl;
    return 0;
}