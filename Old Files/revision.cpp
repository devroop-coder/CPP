#include<iostream>
using namespace std;
int main()
{

    cout<<"Enter no of column ";
    int n;
    cin>>n;
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<" *";
    //     }cout<<endl;
        
    // }
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = i; j <=n; j++)
    //     {
    //         cout<<" *";

    //     }cout<<endl;
        
    // }
    
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = i; j <=n; j++)
    //     {
    //        cout<<"  ";
        
    //     }
    //     for (int j = 1; j <=2*i-1; j++)
    //     {
    //         cout<<"* ";
    //     }cout<<endl;
        
        
    // }
    
        
   for (int i = 1; i <=n; i++)
   {
       for (int j = 1; j <=i; j++)
       {
           cout<<" *";
       }cout<<endl;
       
   }
   for (int i = 1; i < n; i++)
   {
       for (int j = i; j<n; j++)
       {
          cout<<" *";
       }
       cout<<endl;
   }
   
   
    
    
    
    
    return 0;
}
