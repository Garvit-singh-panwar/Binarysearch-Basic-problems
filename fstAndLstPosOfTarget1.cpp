// given an array of integers 'a' that is sorted in non decreasing order 
// find the first and the last position of a given 'target' element in the sorted array
// follow 0-based indexing 
// if target is not found in the array, return [-1,-1]

// input :
// array = {1,2,3,3,3,4,5,11} , targrt = 3
// output = [2,4]

#include<iostream>
using namespace std;

void first_and_last_pos(int arr[] , int target , int fstlst[2],int lo , int hi)
{

int mid;
int ans;
fstlst[0] = -1;
fstlst[1] = -1;
while(lo <= hi)
{
mid = (lo+hi)/2;
if(arr[mid] == target)
{
    ans = mid;
    while(arr[ans-1] == target)
    {
            ans = ans-1;
                    
    }
    fstlst[0] = ans; 
    ans = mid;
    while (arr[ans+1]== target)
    {
            ans = ans+1;
    }
     fstlst[1] = ans;
    break; 
}
if(arr[mid] < target)
{
    lo = mid+1;
}
if(arr[mid] > target)
{
    hi = mid-1;
}


}



}


int main()
{

int arr[] = {1,1,1,2,2,3,3,3,3,4,4,5,5,5,5,5,6,6};

int hi = sizeof(arr)/sizeof(arr[0])-1;

int fstlst[2];

first_and_last_pos(arr,3,fstlst,0,hi);

cout << "first position of target value is " << fstlst[0] << endl;
cout << "last position of target value is " << fstlst[1] << endl;



    return 0;
}
