#include<iostream>
using namespace std;

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

//bubble sort the array

    for (int i = 1; i < n; i++)
    {
       for (int j = 0; j < n-i; j++)
       {
        if (arr[j]>arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
        
       }
       
    }


    //insertion sort


    // for (int i =1 ; i < n; i++)
    // {
    //     int current = arr[i];
    //     int j = i-1;
    //     while (arr[j] > current && j>=0)
    //     {
    //         arr[j+1]=arr[j];
    //         j--;
    //     }
    //     arr[j+1] = current;
    // }
    



     for (int i = 0; i < n; i++)
     {
        cout<<arr[i]<<"  ";
     }
     cout<<"sucessfully exicuted";

    return 0;
}