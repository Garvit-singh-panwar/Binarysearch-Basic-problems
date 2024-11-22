// you have 'n' ( n <= 10^5) boxes of choclates. 
// Each box contain a[i] (a[i]<=10000) choclates 
// you need to distribute these boxes among 'm' students such that the maximum no of choclates allocated to a student is minimum.
// a. one box will allocate to exact one student. 
// b. all the boxes should be allocated. 
// c. each student has to  be allocared at least one box. 
// d. allotment should be in contigious order , for instance , a student cannot be allocated box 1 and box 3 , skip box 2.
// calculate and return that minimum possible number.
// assume that it is always possible to distribute the choclate.

// the first line of input will contain the value of n, the number of boxes.
// the second line of input will contain the n numbers denoting the number of choclates in each box.
// the third line will contain the m,number of students.

// input:
// 4
// 12,34,67,90
// 2
// output:
//  113



#include<iostream>
using namespace std;

bool canDistributeChoclates(int array[] , int n , int m , int mid)
{

int student = 1;
int current = 0;

for(int i = 0 ; i < n ; i++ )
{   if(array[i] > mid)return false;
    
    if(current + array[i] > mid)
    {
        student++;
        current = array[i];
        if(student > m) return false;
    }
    else{
        current += array[i];
    }
}

return true;
}

int DistributeMinMaxChocolate(int array[] ,int n , int m)
{

    int lo = array[0];
    int hi = 0;
    for(int i = 0 ; i < n ; i++ )
    {
        hi += array[i];
    }

    int mid;
    int ans = -1;
    while(lo <= hi)
    {

        mid = (lo+hi)/2;

        if(canDistributeChoclates(array,n , m , mid)){
             ans = mid;
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

int array[] = {12,34,67,90};
int n = sizeof(array)/sizeof(array[0]);
int m = 2;
cout << DistributeMinMaxChocolate(array , n , m);


    return 0;
}