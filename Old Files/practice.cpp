#include <iostream>
using namespace std;
class choice
{
   public:
   void display(int n)
   {
    switch (n)
    {
    case 1: cout<<"sunday"<<endl; 
            break;
    case 2: cout<<"Monday"<<endl; 
           break;
    case 3: cout<<"Tuesday"<<endl; 
            break;
    case 4: cout<<"Wednesday"<<endl; 
            break;
    case 5: cout<<"Thursday"<<endl; 
            break;
    case 6: cout<<"Friday"<<endl; 
            break;  
    case 7: cout<<"Saturday"<<endl; 
            break;          
    default:cout<<"Invalid input";
        break;
    }

   }
};
int main(){
    choice c;
    int n;
    cout<<"Enter the day: ";
    cin>>n;
    c.display(n);
    return 0;
}

