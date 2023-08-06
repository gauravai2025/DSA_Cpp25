#include<bits/stdc++.h>
using namespace std;
// create class for heap
class max_heap{
    public:
    int arr[100];
    int size;
    // constructor
    max_heap(){
        size=0;
        arr[0]=-1;// dummy node
    }


    void insert(int val){
        size=size+1;
        int idx=size;
        arr[idx]=val;
        while(idx>1){
            int parent=idx/2;
            if(arr[parent]<arr[idx]){
            swap(arr[parent],arr[idx]);
            idx=parent;
            }
            else
            return ;
        }
    }


  void print(){
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  }


  void deletefromheap(){     // delete 1st root node  or root node
    if(size==0){
        cout<<"heap is empty\n";
        return ;
    } 
  arr[1]=arr[size]; // copy last element to root node / first index
  size--;  //delete last element
  int idx=1;
  // take root to last position 
  while(idx<size){
    int left=2*idx;
    int right=2*idx+1;

    if(left<size && arr[idx]<arr[left])
    swap(arr[idx],arr[left]);
    else if (right<size && arr[idx]<arr[right])
        swap(arr[idx],arr[right]);
    
    else
        return ;   
    }
  }

  
};

 
int main()
{

// create object of heap class
max_heap h;
h.insert(50);
h.insert(55);
h.insert(53);
h.insert(52);
h.insert(54);
h.print();
h.deletefromheap();
h.print();
return 0;
}