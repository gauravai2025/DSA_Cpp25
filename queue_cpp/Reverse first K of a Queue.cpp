#include<bits/stdc++.h>
using namespace std;

 queue<int> reverseFirstK(queue<int>&q, int k){
        
    int size=q.size();
    
    if(k>size)
    return q;
   
    stack<int>st;
    int k1=k;
    
    while(k1--){
   st.push(q.front());
   q.pop();
    }
    
    while(!st.empty()){
    q.push(st.top());
    st.pop();
    }
    
    for(int i=1;i<=size-k;i++){
        q.push(q.front());
        q.pop();
    }
    
    return q;    

    }
 
int main()
{

    queue<int> q;
    int n, k;
    cout<<"Enter the number of elements in the queue: ";
    cin >> n;
    cout<<"Enter the elements of the queue: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    cout<<"Enter the value of k: ";
    cin >> k;
    queue<int> result = reverseFirstK(q, k);
    cout << "Queue after reversing first " << k << " elements: ";
    while (!result.empty()) {
        cout << result.front() << " ";
        result.pop();
    }
    cout << endl;
    return 0;
}