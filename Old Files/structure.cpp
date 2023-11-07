#include <iostream>
using namespace std;
struct info
{
    int hNo;
    string fName;
    string mName;

}ram;

main()
{
    cout<<"Enter house No :";
    cin>>ram.hNo;
    cout<<"Enter Father's Name :";
    cin>>ram.fName;
    cout<<"Enter Mother's Name :";
    cin>>ram.mName;

    cout<<ram.fName<<"   "<<ram.mName<<"  "<<ram.hNo;

    return 0;
}