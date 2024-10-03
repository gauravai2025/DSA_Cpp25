#include<bits/stdc++.h>
using namespace std;

class twoStacks {
  public:
int *arr;
int size;
int top1;
int top2;

    twoStacks() {
        
      this->size=100;
      top1=-1;
      top2=100;
      arr=new int[100]; 
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        
        if(top2-top1>1){
            top1++;
            arr[top1]=x;
        }

        else{
            cout<<"stack is overflow\n";
        }
        
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        
        if(top2-top1>1){
            top2--;
            arr[top2]=x;
        }
            
            else{
                cout<<"stack is overflow\n";
            }
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        
        if(top1==-1){
            return -1;
        }
        
      else{
        int val=arr[top1];
        top1--;
        return val;
        }
    }

    // Function to remove an element from top of the stack2.
    int pop2() {
        
        if(top2==100){
            return -1;
        }
        
        else{
        int val=arr[top2] ;
        
        top2++;
        return val;
        }
    }

    bool isempty1(){
        if(top1==-1 )
        return 1;
        else
        return 0;
    }


    bool isempty2(){
        if(top2==100)
        return 1;
        else
        return 0;
    }

    int peak1(){
        if(top1==-1)
        return -1;
        else
        return arr[top1];
    }

    int peak2(){
        if(top2==100)
        return -1;
        else
        return arr[top2];
    }
 
   


};
 
int main()
{
    twoStacks ts;

    ts.push1(2);
    ts.push1(3);
    ts.push2(4);

   cout<<ts.pop1()<<endl;
    cout<<ts.pop2()<<endl;
    cout<<ts.pop2()<<endl;

    if(ts.isempty1())
    cout<<"stack1 is empty\n";
    else
    cout<<"stack1 is not empty\n";
 
    if(ts.isempty2())
    cout<<"stack2 is empty\n";
    else
    cout<<"stack2 is not empty\n";

    cout<<ts.peak1()<<endl;
    cout<<ts.peak2()<<endl;

    return 0;
}