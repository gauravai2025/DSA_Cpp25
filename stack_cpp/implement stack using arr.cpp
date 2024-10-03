#include<bits/stdc++.h>
using namespace std;
 
 class Stack{
    public:

    // data member attributes
    int *arr;
    int size;
    int top;

   // functions/ behaviour

   // constructor
   Stack(int size){

     this->size=size;
    arr=new int[size];  // dynamic memory allocation
   
      top=-1;
   }


void insert(int val){  //  time complexity- O(1)  and space complexity- O(1)
                         
    // chack stack is full

    if(top>=size-1){
    cout<<"stack is overflow\n";
    return ;
    }

    top++;

    arr[top]=val;

   }

   void remove(){    //  time complexity- O(1)  and space complexity- O(1)
 
     // check stack is empty
    if(top==-1){
        cout<<"stack is empty\n";
        return ;
    }

    top--;
   }

   int  peak(){     //  time complexity- O(1)  and space complexity- O(1)
     
      // check stack is empty
    if(top>=0){
        return arr[top];
    }
    else
     cout<<"stack is empty\n";
     return -1;
   
   }

   bool isempty(){   //  time complexity- O(1)  and space complexity- O(1)

    if(top==-1)
    return 1;
    else
    return 0;
   }

 int stacksize(){   //  time complexity- O(1)  and space complexity- O(1)
    
    return top+1;
 }


 };


int main()
{

 // create new stack
 Stack st(5);

 st.insert(22);
 st.insert(42);
 st.insert(41);
 st.insert(20);
 st.insert(7);
 st.insert(11);

 cout<<"top element of stack: "<<st.peak()<<endl;
 st.remove();

  cout<<"top element of stack: "<<st.peak()<<endl;
 st.remove();

  cout<<"top element of stack: "<<st.peak()<<endl;
   st.remove();

  cout<<"top element of stack: "<<st.peak()<<endl;

 if(st.isempty())
 cout<<"stack is empty"<<endl;
 else
cout<<"stack is not empty"<<endl;


 st.insert(18);

 cout<<"size of stack: "<<st.stacksize();

    return 0;
}