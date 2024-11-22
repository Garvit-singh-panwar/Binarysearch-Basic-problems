// Given the roatated sorted array of integer
// which contain distinct elements 
// and an integer target , return the index of target if it is in the array 
// otherwise return-1 

// input:  Array = [3,4,5,1,2]  Target = 4 

// Output : 1

#include<iostream>
using namespace std;

int find_target_in_SortedRotatedarray(int array[] , int target , int lo , int hi)
{
int ans = -1;
int mid;

while(lo <= hi)
{

mid = (lo+hi)/2;
if(array[mid] == target)
{
    ans = mid;
    return ans;
}

if(array[mid] > target && target > array[hi])
{
    hi = mid-1;
}
else{
    lo = mid+1;
}

}


    return ans;
}



int main()
{

int array[] = {6,7,8,9,10,1,2,3,4,5};
int hi = 9;
int lo = 0;
int target = 4;

cout << find_target_in_SortedRotatedarray(array , target , lo , hi) << endl;




    return 0;
}