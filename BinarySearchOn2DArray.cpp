// Search the 'target' value in 2D integer matrix of dimension n x m and return 1 if found , else return 0.
// This matrix has the following properties :
// 1. integer in each row are sorted from left to right
// 2. the first integer of eah row is greater than the last integer of the previous row 

// Input: matrix = [ [1,3,5,7] , [10,11,16,20] , [23,30,34,60]]      target = 3

// Output = 1;

#include<iostream>
#include<vector>
using namespace std;

bool find_X_in2DArray(vector <vector <int> > & vec , int target)
{

int row = 0;
int column = vec[0].size();

int lo = 0 ;
int hi = vec[0].size()-1;
int mid;

while(row < vec.size() && vec[row][hi] < target)
{
    row++;
}

while(lo <= hi)
{
    mid =  (lo+hi)/2;
    if(vec[row][mid] == target)
    {
        return true;
    }

    if(vec[row][mid] > target)
    {
        hi = mid-1;
    }
    else{
        lo = mid+1;
    }
}


return false;
}

int main()
{

vector <vector <int> > vec = {{1,3,5,7} , {10,11,16,20} , {23,30,334,50}};

int target = 4;

cout << find_X_in2DArray(vec , target) << endl;




    return 0;
}