#include<iostream>
using namespace std;

int first_Occurence_target(int arr[] , int target , int lo , int hi)
{

int ans = -1;
int mid;
while(lo <= hi)
{
    mid = (lo+hi)/2;
if( arr[mid ] == target)
{
    ans = mid;
    hi = hi-1;
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

return ans;
}






// int first_Occurence_target(int arr[], int target , int lo , int hi)
// {
//     int ans = -1;
    
//     while(lo<=hi){
//         int mid = (lo+hi)/2;
//         if(arr[mid] == target)
//         {
//             ans = mid;
//             while(arr[ans] == target)
//             {
//                 if(arr[ans-1] == target)
//                 {
//                     ans = ans-1;
//                 }
//                 else{
//                     break;
//                 }
//             }
//             break;
//         }

//         if(arr[mid] < target)
//         {
//             lo = mid+1;
//         }
//         if(arr[mid ]> target)
//         {
//             hi = mid-1;
//         }



//     }


// return ans;
// }

int main()
{
int arr[] = {2,5,5,5,6,6,7,7,7,8,8,9,9,9,10};
int target = 5 ;
int hi = sizeof(arr)/sizeof(arr[0]) -1; 
cout<< first_Occurence_target(arr , target , 0 , hi) << endl;


    return 0;
}