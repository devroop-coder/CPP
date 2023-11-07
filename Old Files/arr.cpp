#include <iostream>
using namespace std;

main()
{
    int marks[6];
    int total=0;
    cout<<"Enter the marks for ";
    for(int i = 0; i<6;i++)
    {
        cout<<"Subject "<<i+1<<": ";
        cin>>marks[i];
        total+=marks[i];
    

    }
    cout<<"Total mark is "<<total;


    return 0;

}