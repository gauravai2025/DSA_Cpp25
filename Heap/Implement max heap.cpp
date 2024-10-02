#include <bits/stdc++.h>
using namespace std;


// NOTES:  1 based indexing for  ith node 
// left child =2*i  right child=2*i+1
// parent= i/2 th node
// leaf node : from (n/2+1) to n  already follow heap property  no need to heapify
// internal node : 1 to n/2  need to heapify to follow heap property

// NOTES:  0 based indexing for  ith node 
// left child =2*i+1  right child=2*i+2
// parent= (i-1)/2 th node
//  leaf node : from (n/2) to n-1 already follow heap property no need to heapify
// internal node : 0 to (n/2-1)  need to heapify to follow heap property


// create class for heap
class max_heap
{
public:
  int arr[100001];
  int size;
  // constructor
  max_heap()
  {
    size = 0;
    arr[0] = -1; // dummy node
  }

  void insert(int val)
  {
// check heap is full or not
    if (size >100001)
    { 
      cout << "heap is full";
      return;
    }

    size = size + 1;
    int idx = size;
    arr[idx] = val;

    // loop run till parent of node exit not reach root node
    while (idx > 1)
    {
      int parent = idx / 2;

      if (arr[parent] < arr[idx])
      {
        swap(arr[parent], arr[idx]);
        idx = parent;
      }
      else
        return;
    }
  }

  void print_heap()
  {
    for (int i = 1; i <= size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  void deletefromheap()
  {
    // delete 1st root node  or root node
    if (size == 0)
    {
      cout << "heap is empty\n";
      return;
    }

    arr[1] = arr[size]; // copy last element to root node / first index
    size--;             // delete last element

    int idx = 1;
    // take root to last position
    while (idx < size)
    {

      int left = 2 * idx;
      int right = 2 * idx + 1;
      int largest = idx;
      // Compare with left child
      if (left <= size && arr[left] > arr[largest])
      {
        largest = left;
      }

      // Compare with right child
      if (right <= size && arr[right] > arr[largest])
      {
        largest = right;
      }

      // If largest is not the current node, swap and continue
      if (largest != idx)
      {
        swap(arr[idx], arr[largest]);
        idx = largest;
      }

      else
        return;
    }
  }

  
int extractMax() 
{
    if(size<=0)
    return -1;
    
    int max_val=arr[1];
    
    arr[1]=arr[size];
    
    size=size-1;
    
  
 // step3 propogate 1st node to its corrcet position
    int idx=1;

    while(idx<=size){  // delete operation/ minheapiify operation/ algorithm

    int left=2*idx;
    int right=2*idx+1;

    int largest=idx;

    if(left<=size && arr[left]>arr[largest])
    largest=left;

    if(right<=size && arr[right]>arr[largest])
    largest=right;
   
   if(largest!=idx){
    swap(arr[largest],arr[idx]);
    idx=largest;
   }

   else
  return max_val;
}

}


void IncreaseKey(int i,int new_val)
{
    if(i>size){
    cout<<"index out of bound\n";
    return ;
    }

    arr[i]=new_val;

    while(i>1){
    int parent=i/2;

    if(arr[parent]<arr[i]){
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

     IncreaseKey(i,INT_MAX);
     deletefromheap();
    
}

};

int main()
{

  // create object of heap class
  max_heap h;
 
h.insert(6);
cout<<h.extractMax()<<endl ;
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