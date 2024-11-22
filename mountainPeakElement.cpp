// given a mountain array 'a' of length greater than 3
// return the indx 'i' such that[ arr[0] < arr[i] < ... <arr[i-1] ]  < arr[i] >  [ arr[i+1]  > ... > arr[arr.length-1] ] 
// the index is known as the peak index.


// Input : Array [0,4,1,0];

//  output : 1

#include<iostream>
using namespace std;

int mountain_Peak_element(int array[] , int hi , int lo)
{

if(array[lo] > array[lo+1] )
{
    return lo;

}
if(array[hi] > array[hi-1])
{
    return hi;
}
int mid;
int ans;
while(lo <= hi)
{
mid = (hi+lo)/2;

if( array[mid-1] < array[mid] )
{
  lo = mid+1;
  ans = mid;  
}
else{
    hi = mid-1;
}


}

return ans;

}

int main()
{





    return 0;
}

