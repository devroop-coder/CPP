#include <iostream>
#include <vector>
using namespace std;

// int larEleInx(int array[], int size)
// {

//     int max = INT16_MIN;
//     int maxIdx = -1;

//     for (int i = 0; i < size; i++)
//     {
//         if (array[i] > max)
//         {
//             max = array[i];
//             maxIdx = i;
//         }
//     }
//     return maxIdx;
// }

// int sLarge(int array[],int size){

//     int max = INT16_MIN;
//     int secondMax =INT8_MIN;

//     for (int i = 0; i < size; i++)
//     {
//         if (array[i]>max)
//         {
//             max = array[i];
//         }
        
//     }
//     for (int i = 0; i < size; i++)
//     {
//         if(array[i]> secondMax && array[i] != max){
//             secondMax = array[i];
//         }
//     }
//     return secondMax;
// }

void sort(vector<int> &v){

int count=0;
for(int x : v){
    if(x==0){
        count++;
    }
}
for (int i = 0; i < v.size(); i++)
{
    if (i<count)
    {
        v[i]=0;
    }
    else{
        v[i]=1;
    }
}
for (int y : v)
{
    cout<<y<<" ";
}

}

int main()
{

    // int array[] = {2, 5, 2, 6, 6, 5, 8, 4, 8, 7, 4};
    // int size = sizeof(array) / sizeof(array[0]);
    // int indLar = larEleInx(array, size);
    // int largeEle = array[indLar];
    // for (int i = 0; i < size; i++)
    // {
    //     if (array[i]==largeEle)
    //     {
    //         array[i] = -1;
    //     }
        
    // }
    
    // int secondLarEle = larEleInx(array, size);
    // cout << "2nd Largest Number is : " << sLarge(array,size);
    // int k;
    // cout<<"Enter the value for K ";
    // cin>>k;
    // k = k % size;
    // int ansArray[size];
    // int j = 0;
    // for (int i = size - k; i < size; i++)
    // {
    //     ansArray[j++]=array[i];

    // }
    // for (int i = 0; i <= k ; i++)
    // {
    //     ansArray[j++]=array[i];
    // }


    // for (int i = 0; i < size; i++)
    // {
    //     cout<<ansArray[i]<<" ";
    // }
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // v.push_back(6);
    // v.push_back(7);

    // cout<<"Enter the velue for K : ";
    // int k, size = v.size();
    // cin>>k;
    // k=k%size;

    // reverse(v.begin(),v.end());
    // reverse(v.begin(),v.begin()+k);
    // reverse(v.begin()+k,v.end());

    // for(int x : v){
    //     cout<<x<<" ";
    // }
    vector<int> v;
    int n;
    cout<< " Enter no of element ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);

    }
    sort(v);
    


    return 0;
}
