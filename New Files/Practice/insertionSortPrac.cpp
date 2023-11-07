#include<iostream>
using namespace std;
void insertionSorter(int a[],int n){
    for (int i = 1; i < n; i++)
    {
        int current =a[i];
        int j= i-1;
        while(a[j] > current && j >=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
    
}
int main()
{
    int n;
    cout<<"Enter length : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    insertionSorter(a,n);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    
    
    return 0;
}