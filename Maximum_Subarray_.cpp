/*
Here i am writing the code of maximum sum of an subarray 
here we are using the kadane's algorithms.
*/
#include<iostream> 
#include<climits>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of an array ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"The elements in an array are ";
    for(int i = 0;  i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int maxi = INT_MIN;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
         sum = sum + arr[i];
         if(sum < 0)
         {
             sum = 0;
         }
         maxi = max(maxi , sum);
    }
    cout<<"The maximum sum of a subarray are "<<maxi<<endl;
}