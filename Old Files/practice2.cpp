#include <iostream>
using namespace std;

class add
{
    int a, b;

public:
    add() {}
    add(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "Sum of " << a << " and " << b << " is " << a + b << endl;
    }
};
int main()
{
    add a;
    int x, y;
    cout<<"Enter the  number :"<<endl;
    cin>>x>>y;
    a=add(x,y);
    a.display();
    return 0;
}
