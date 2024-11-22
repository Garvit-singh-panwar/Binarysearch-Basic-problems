// A new racing track for kids is being built in new york whth 'n' starting spots.
// The sports are located along a straight line at position x1,x2.... xn (xi <= 10^9). 
// for each 'i' , xi+1 > _Xinvalid_argument
// at a time only 'm' childrean are allowed to enter the race .
// since the race track is for kids , they they may run into each other while running 
// to prevent this , we want to choose the starting sports such that the minimum distance between any two of them is as large as possible 
// what is the largest minimum distance ? 

// the first line of input will contain the value of n , the number of starting static_pointer_castthe second line of input will contain the n numbers denoting the location of each static_pointer_castthe third line will contain the value of m ,number of children


// Input: 
// 5
// 1 2 4 8 9
// 3 

// Output: 3

#include<iostream>
using namespace std;


bool Children_can_enter( int arr[] , int child , int spots , int mid)
{

int maxDis = arr[0];
int stud = 1;

for(int i = 0 ; i < spots; i++)
{
    if(( arr[i] - maxDis) >= mid)
    {
        stud++;
        maxDis = arr[i];
    }
    
    if(stud == child)return true;
    // if(stud > child) return false;
}

return false;
}

int max_Distance_btwn_children(int arr[] , int child , int spots )
{

int lo = 1;
int hi = arr[spots-1]-arr[0];
int mid;
int ans = -1;
while(lo <= hi)
{
    mid = (hi+lo)/2;
    if(Children_can_enter( arr , child ,spots,mid))
    {
        ans = mid;
        lo = mid+1;
    }
    else
    {
        hi = mid-1;
    }


}


return ans;
}



int main()
{


int arar[] = {1,2,4,8,9};
int spots = 5;
int stud = 3;

cout << max_Distance_btwn_children(arar , stud , spots);

    return 0;
}