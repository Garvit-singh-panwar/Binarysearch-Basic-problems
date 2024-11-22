// Search the 'target' value in 2D integer matrix of dimension n x m and return 1 if found , else return 0.
// This matrix has the following properties :
// 1. integer in each row are sorted from left to right
// 2. the first integer of eah row is greater than the last integer of the previous row 

// Input: matrix = [ [1,3,5,7] , [10,11,16,20] , [23,30,34,60]]      target = 3

// Output = 1;

#include<iostream>
using namespace std;

bool find_X_In2DArray(int array[][4],int target , int lo , int hi)
{
    int mid;
    int row;
    int column;
    while( lo <= hi)
    {
        mid = (hi+lo)/2;
        int row = mid/4;
        int column = mid%4;

        if(array[row][column] == target)
        {
            return true;
        }
        if(array[row][column] > target)
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
 int array[][4] = { {1,3,5,7 } , { 10,12,14,16} , {21,23,25,27}} ;
 int hi = 12-1;
 int lo = 0;
int target = 3;
 
 cout<< find_X_In2DArray(array ,target , lo ,hi ) << " " << endl;





    return 0;
}