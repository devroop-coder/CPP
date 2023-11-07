#include<iostream>
using namespace std;
int fiboo(int n){
    if (n<2)
    {
        return 1;
    }
    return fiboo(n-1)+fiboo(n-2);
}
int main()
{
    int n;
    cout<<"Enter n term ";
    cin>>n;
    cout<<"N term is "<<fiboo(n);
    return 0;
}
