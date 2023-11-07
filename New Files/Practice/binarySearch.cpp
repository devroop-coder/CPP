#include<iostream>
using namespace std;
int binarySearch (int a[],int n,int k)
{
    int s=0;
    int e =n-1;
    while (s<=e)
    {
        int mid = (s+e)/2;
        if(a[mid]==k)
        {
            return mid;
        }else if(a[mid]>k)
        {
            e=mid-1;
        }else{
            s=mid+1;
        }

    }
    return -1;
}
int main()
{   int n;
    cout<<"\n Enter length of the array: ";
    cin>>n;
    int a[n];
    cout <<"Enter elements of the array in assending order: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int k;
    cout<<"Enter which you want to find : ";
    cin>>k;
    int index= binarySearch(a,n,k);
    if(index==-1){
    cout<<"No element found!!!";
    }else{
        cout<<"INDEX OF THE ELEMENT IS : "<<index;
    }
    
    return 0;
}