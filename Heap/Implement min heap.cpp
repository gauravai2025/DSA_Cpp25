#include<bits/stdc++.h>
using namespace std;

const int SIZE=1e5+1;
class min_heap{
public:
    int arr[SIZE];
    int size;

 // constructor
    min_heap(){

    arr[0]=-1;
    size=0;
    }

void insert(int val)
{
    if(size>SIZE){
        cout<<"heap is full";
        return ;
    }

    size=size+1;
    int idx=size;
// step1 insert val at end
    arr[idx]=val;

    // step2 propogate val to it correct position

    while(idx>1){    // decreaseKey operation

    int parent=idx/2;

        if(arr[parent]>arr[idx]){
        swap(arr[parent],arr[idx]);
         idx=parent;
        }
        else
        return ;
    }

}

void print_heap(){

    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

void deletefromheap(){

     if (size == 0) {
        cout << "Heap is empty" << endl;
        return;
        }

 //  step1 replce 1st root node to last node
    arr[1]=arr[size];

    // step2 remove last node form heap;
    size--;
 
 // step3 propogate 1st node to its corrcet position
    int idx=1;

    while(idx<=size){  // delete operation/ minheapiify operation/ algorithm

    int left=2*idx;
    int right=2*idx+1;

    int least=idx;

    if(left<=size && arr[left]<arr[least])
    least=left;

    if(right<=size && arr[right]<arr[least])
    least=right;
   
   if(least!=idx){
    swap(arr[least],arr[idx]);
    idx=least;
   }

   else
   return ;

    }
}

int extractMin() 
{
    if(size<=0)
    return -1;
    
    int min_val=arr[1];
    
    arr[1]=arr[size];
    
    size=size-1;
    
  
 // step3 propogate 1st node to its corrcet position
    int idx=1;

    while(idx<=size){  // delete operation/ minheapiify operation/ algorithm

    int left=2*idx;
    int right=2*idx+1;

    int least=idx;

    if(left<=size && arr[left]<arr[least])
    least=left;

    if(right<=size && arr[right]<arr[least])
    least=right;
   
   if(least!=idx){
    swap(arr[least],arr[idx]);
    idx=least;
   }

   else
  return min_val;
}

}

void decreaseKey(int i,int new_val)
{
    if(i>size){
    cout<<"index out of bound\n";
    return ;
    }

    arr[i]=new_val;

    while(i>1){
    int parent=i/2;

    if(arr[parent]>arr[i]){
    swap(arr[parent],arr[i]);
    i=parent;
    }
    else
    return ;
    }
}

//Function to delete a key at ith index.
void deleteKey_at_ith(int i)
{
    if(i>=size){
    cout<<"index out of bound\n";
    return ;
    }

    decreaseKey(i,INT_MIN);
     deletefromheap();
    
}


};
 
int main()
{

min_heap h;

h.insert(6);
cout<<h.extractMin()<<endl ;
h.deletefromheap();
  
  h.insert(5);
   h.insert(8);
  h.insert(7);

   h.print_heap();
   h.deletefromheap();
   h.print_heap();
   h.insert(18);
    h.print_heap();
   h.deleteKey_at_ith(2);
    h.print_heap();
 
    return 0;
}