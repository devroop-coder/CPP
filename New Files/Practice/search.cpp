#include<iostream>
using namespace std;

int binarySearch (int arr[],int n,int k){

    int start = 0, end = n-1;
    while (start<=end)

    {
        int mid=(start+end)/2;
        if (arr[mid]==k)
        {
            return mid;
        }else if (arr[mid]>k)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        
    }
    return -1;




}

int main()
{
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter which you want to find :";
    cin>>key;


    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i]==key)
    //     {
    //         cout<<i;
    //         break;
    //     }
        
    // }
    cout<<"Position is "<<binarySearch(arr,n,key);

    return 0;
}