#include<iostream>
using namespace std;
class abbs{
    public:
    virtual void show()=0;
    void print(){
        cout<<"Hello world"<<endl;

    }


};

class mainn : public abs{
    public:
    void show(){
        cout<<"Virtual function";
    }

};
int main()
{
    mainn m;
    m.print();
    m.show();
    

    
    return 0;
}