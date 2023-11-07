#include <iostream>
using namespace std;

int main()
{
    // int m,n;

    // cout<<"Enter no of row  ";
    // cin>>m; //row
    // cout<<"Enter no of Column  ";
    // cin>>n; //column

    // for (int i = 1; i <= m; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //        cout<<"* ";

    //     }
    //     cout<<endl;

    // }

    // for (int i = 1; i <= m; i++)
    // {
    //     for (int j = 1; j <=n; j++)
    //     {
    //         if (i==1 || j==1 ||i==m || j==n  )
    //         {
    //            cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }

    //     }cout<<endl;

    // }

    // for (int i = 1 ; i <= n; i++)
    // {
    //     for (int j = i; j <= n; j++)
    //         {
    //             cout<<"  ";

    //         }
    //         for (int j = 1; j <= (2*i-1); j++)
    //         {
    //             cout<<"* ";
    //         }

    //         cout<<endl;

    // }
    // cout<<endl;
    // for (int i = 1; i <=n; i++)

    // {
    //     for (int j = i; j <=5 ; j++)
    //     {
    //         cout<<"* ";
    //     }cout<<endl;

    // }

    // for (int i = 1; i <=n; i++)

    // {
    //     for (int j = 1; j <=i ; j++)
    //     {
    //         cout<<"* ";
    //     }cout<<endl;

    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j =i ; j <= n; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     for (int j = 1; j <i ; j++)
    //     {
    //         cout<<j<<" ";
    //     }cout<<endl;

    // }

    // for (int i = 1; i <= m; i++)
    // {
    //    for (int j = 1; j <=n; j++)
    //    {
    //        if ((i+j)%2==0)
    //        {
    //            cout<<"1 ";
    //        }else{
    //            cout<<"2 ";
    //        }

    //    }
    //    cout<<endl;
    // }

    // for(int i =1; i<=m;i++){
    //     for (int j = i; j <m; j++)
    //     {
    //        cout<<" ";
    //     }
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<j;
    //     }for (int j = (i-1); j >=1; j--)
    //     {
    //         cout<<j;
    //     }cout<<endl;

    // }
    // for (int i = 1; i <=m; i++)
    // {
    //     for (int j = i; j < m; j++)
    //     {
    //         cout<<"  ";
    //     }
    //     for (int j = 1; j <= (2*i-1); j++)
    //     {
    //         if (i==1 || i==m||j==1|| j==(2*i-1))
    //         {
    //              cout<<i<<" ";
    //         }else{
    //             cout<<"  ";
    //         }

    //     }cout<<endl;

    // }
    // int n,dig = 0;
    // cin>>n;
    // while (n>0)
    // {
    //     n=n/10;
    //     dig++;

    // }

    // cout<<dig;

    // int n,sum=0,ld;
    // cout<<"Enter the number ";
    // cin>>n;
    // while (n>0)
    // {
    //     ld=n%10;
    //     sum +=ld;
    //     n/=10;
    // }
    // cout<<sum;

    int n, ld, rn = 0;
    cout << "Enter the number : ";
    cin >> n;
    while (n > 0)
    {
        ld = n % 10;
        rn = rn * 10 + ld;
        n /= 10;
    }
    cout << "Reversed No is : " << rn;

    // int n,sum = 0;
    // cout<<"Enter the number ";
    // cin>>n;
    // for (int i = 1; i <=n; i++)

    // {
    //     if (i%2==0)
    //     {
    //         sum-=i;
    //     }
    //     else{
    //         sum+=i;
    //     }
    // }

    // cout<<sum;

    // int n,fact=1;
    // cin>>n;
    // for (int i = 1; i <=n; i++)
    // {
    //     fact*=i;
    // }
    // cout<<fact;

    // int a,b,ans=1;
    // cin>>a;
    // cin>>b;
    // for (int i = 1; i <=b; i++)
    // {
    //     ans*=a;
    // }
    // cout<<ans;
    return 0;
}
