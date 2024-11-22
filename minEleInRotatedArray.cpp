// A rotated sorted array array is a sorted array on which rotated operation has been performed some number of times 
// given a rotated sorted array , find the index of the minimum element in the array 
// follow 0-based indexing 
// it is guaranteed that all the element in the array are unique.

// input : array = [3,4,5,1,2]

// output: 3


#include<iostream>
using namespace std;

int minEleInSortedRotatedArray(int array[] , int lo , int hi)
{

int mid;
int ans;
int last = hi ;
while(lo <= hi)
{

mid = (lo+hi)/2;

if(array[mid ] <= array[last])
{
    ans = mid;
    hi = mid-1;
}

if(array[mid] > array[last])
{

lo = mid+1;

}

}

return ans;

}

int main()
{

int array[] = {5,6,7,8,1,2,3,4};
int lo = 0;
int hi = 7;

cout << minEleInSortedRotatedArray(array , lo , hi) << endl;




    return 0;
}