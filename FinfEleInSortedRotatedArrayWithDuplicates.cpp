// Search element in rotated sorted array with duplicate elements 
// return 1 if the element is found else return 0;

// input : Array : [ 0,0,1,1,1,2,0,0,0];    Target : 2
// output : 1



#include<iostream>
using namespace std;

bool is_x_present_in_a_RotatedSortedArray(int array[] , int target , int lo , int hi)
{
    bool flag = false;
    int mid;
    while(lo <= hi)
    {
        int mid = (lo+hi) / 2;
        if(array[mid] == target)
        {
            return true;
        }
        if(array[mid] > array[lo])
        {
            if(array[lo] <= target && target < array[mid])
            {

                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        else
        {
            if(array[hi] >= target && array[mid] < target)
            {
                lo = mid+1;

            }
            else
            {
                hi = mid -1;
            }

        }


    }


    return flag;
}

int main ()
{

int array[] = {0,0,0,1,1,1,2,0,0,0};
int lo = 0;
int hi = 9;
int target = 3;

cout<< is_x_present_in_a_RotatedSortedArray(array , target , lo ,hi)<< endl;






    return 0;
}