#include <iostream>
using namespace std;

int main()
{
    // cout<<"Hello world";

    // int a,b ;
    // cout<< "Enter 1st number"<<endl;
    // cin>>a;
    // cout<< "Enter 2nd Number"<<endl;
    // cin>> b;
    // cout<<"sum = "<<a+b;
    /* int n1,m1,m2,m3,m4,m5;
    cout<<"Enter a number ";
    cin>>n1;
    m1 = n1*1;
    m2 = n1*2;
    m3 = n1*3;
    m4 = n1*4;
    m5 = n1*5;
    cout<<m1 <<endl<<m2<<endl<<m3<<endl<<m4<<endl<<m5; */
    // int age;
    // cout << "Enter your age ";
    // cin >> age;
    // if (age > 150)
    // {
    //     cout << "invalid";
    // }
    // else if (age <= 17)
    // {
    //     cout << "You can't vote";
    // }

    // else
    // {
    //     cout << "You can vote";
    // }
    // switch (age)
    // {
    // case 18:
    //     cout<<"You are 18 years old";
    //     break;
    
    // default:
    // cout<<"You are 18 years old";

    //     break;
    // }
    // int index = 0;
   
    // while (index < 10){
    //     cout<<index<<endl;
    //     index ++;

    //}
    
    // do
    // {
    //     cout<<index<<endl;
    //     index ++;
    // } while (index > 10);
    // int  iq;
    // float da,ir,pa;
    // cout<<"Enter rate of the item ";
    // cin>>ir;
    // cout<<"Enter no of items ";
    // cin>>iq;
    // pa=ir*iq;
    // if(pa>=5000)
    // {da=20*pa/100;
    // cout<<pa-da;
    // }
    // else{da=5*pa/100;
    // cout<<pa-da;}

    // int n,i=1,fact=1;
    // cout<<"Enter a number ";
    // cin>>n;
    // while (i<=n)
    // {
        
    //     fact= fact * i;
    //     i++;
    // }
    // cout<<fact;
    
    for (int i = 1; i <= 5; i++)
    {
        
        
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
            
        }
        for (int j = i; j < 5; j++)
        {
            cout<<"  ";
            
        }
        for (int j = 1; j < i; j++)
        {
            cout<<"  ";
            
        }
        for (int j = i; j < 5; j++)
        {
            cout<<"  ";
            
        }
        for (int j = i; j < 5; j++)
        {
            cout<<"  ";
            
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
            
        }
        
        cout<<endl;
        
        
    }
    cout<<"* * * * *         * * * * *"<<endl;
    cout<<"* * * * *         * * * * *"<<endl;
    cout<<"* * * * *         * * * * *"<<endl;
    cout<<"* * * * *         * * * * *"<<endl;
    for (int i = 1; i <= 5; i++)
    {
        // for (int j = i; j <= 5; j++)
        // {
        //     cout<<"  ";
            
        // }
        
        for (int j = i; j <= 5; j++)
        {
            cout<<"* ";
            
        }
        for (int j = 1; j < i; j++)
        {
            cout<<"  ";
            
        }
        for (int j = 1; j < i; j++)
        {
            cout<<"  ";
            
        }
        for (int j = 1; j < i; j++)
        {
            cout<<"  ";
            
        }
        for (int j = i; j < 5; j++)
        {
            cout<<"  ";
            
        }
        for (int j = i; j <= 5; j++)
        {
            cout<<"* ";
            
        }
        
        cout<<endl;
        
        
    }


     return 0;
}