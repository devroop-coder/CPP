#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the number :";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
    cout<<"Sum is "<<sum;




    return 0;
}