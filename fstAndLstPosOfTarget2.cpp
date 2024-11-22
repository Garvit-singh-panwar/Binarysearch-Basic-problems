// given an array of integers 'a' that is sorted in non decreasing order 
// find the first and the last position of a given 'target' element in the sorted array
// follow 0-based indexing 
// if target is not found in the array, return [-1,-1]

// input :
// array = {1,2,3,3,3,4,5,11} , targrt = 3
// output = [2,4]


#include<iostream>
#include<vector>
using namespace std;

void fst_And_Lst_Pos_of_Target(vector <int> &arr , int target ,int result[2])
{
int lb = lowerBound(arr,target);
if( lb != target)
{
result[0] = -1;
result[1] = -1;
}
else
{
    result[0] = lb;
    result[1] = upperBound(arr,target);
}

}


int lowerBound(vector <int> &arr , int target )
{
 int Lb;

int lo = 0;
int hi = arr.size()-1;
int mid ;

while(lo <= hi)
{

mid = (lo+hi)/2;
if( arr[mid] >= target)
{
    Lb = mid;
    hi = mid-1;
}
else{
    lo = mid+1;
}

}
    return Lb;
}

int upperBound(vector <int> &arr , int target)
{

int Ub;
int lo = 0;
int hi = arr.size()-1;
int mid;
while(lo<=hi)
{
mid = (hi+lo)/2;
if(arr[mid] > target)
{
    Ub = mid;
    hi = mid-1;
}
else{
    lo = mid+1;
}

}

return Ub;
}

int main()
{

vector <int> vec = {1,1,1,2,2,3,3,3,3,4,4,5,5};
int target = 4;
int result[2];

fst_And_Lst_Pos_of_Target(vec , target ,result );

cout << "[" << result[0] << "," << result[1] << "]" << endl; 




    return 0;
}