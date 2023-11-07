#include<iostream>
using namespace std;
void boubleSorter(int a[],int n){
   for(int c=1; c<n; c++){
        for (int i = 0; i < n-c; i++)
        {
            if (a[i]>a[i+1])
            {
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
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
    boubleSorter(a,n);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    
    

    return 0;
}