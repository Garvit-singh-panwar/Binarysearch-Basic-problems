// Find the square root of the given non negative value x .
// round it off to the nearest floor integer value 

// input x = 4            input x = 11
// output: 2              output: 3


#include<iostream>
using namespace std;

int sqrt1(int x)
{
    int lo = 1;
    int hi = x;
    int ans;
    while(lo <= hi)
    {
        int mid = (lo+hi)/2;
        if(mid*mid <= x)
        {
           ans = mid;
           lo = mid+1; 
        }
        else{
            hi = mid-1;
        }


    }

return ans;
}

int main()
{

cout << sqrt1(4) << endl;




    return 0;
}