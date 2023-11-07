#include<iostream>
using namespace std;
# define n 5
class stack{
    public:
    int top =-1 ;
    int arr[n];
    
        

        
    
    void push(int x){
        if (top == n-1){
            cout<<"Stack overflow";
            return;
     
       }
       top++;
       arr[top]= x;
       
    }
    void pop(){
        if (top ==-1 ){
            cout<<"Stack is empty";
            return;
        }
        top--;
    }
    void peek(){
        if (top ==-1 ){
            cout<<"Stack is empty";
            return;
        }
        cout<<arr[top];

    }
    bool isEmpty(){
        return top==-1;
            

    
    }
};

int main()
{

    stack sc;
    sc.push(1);
    sc.push(2);
    sc.push(3);
    sc.push(4);
    sc.push(5);
    sc.push(6);
    sc.pop();
    cout<<sc.isEmpty();
    sc.peek();
    sc.pop();
    sc.pop();
    sc.pop();
    sc.pop();
    sc.pop();
    cout<<sc.isEmpty();
    
    return 0;
}