#include<iostream>
using namespace std;
void  selectionSorter(int a[],int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1;  j < n; j++)
        {
            if (a[i]>a[j])
            {
               int temp= a[i];
                a[i]=a[j]; 
                a[j]=temp;
            }
            
        }
        
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
    selectionSorter(a,n);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    
    return 0;
}