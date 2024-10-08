#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    int row;
    int col;

    // Constructor
    node(int val, int i, int j) {
        data = val;
        row = i;
        col = j;
    }
};

// Custom comparator functor
class cmp {
public:
    bool operator()(node a, node b) {
        return a.data > b.data; // Min-heap (smaller elements first)
    }
};

void  smallestRange(vector<vector<int>>& nums) {

        vector<int>ans={0,INT_MAX};

        int numlist=nums.size();
        int max_ele=INT_MIN;

        priority_queue<node, vector<node>, cmp> pq;

        for(int i=0;i<numlist;i++){
        pq.push(node(nums[i][0], i,0));
         max_ele=max(max_ele,nums[i][0]);

        }
        
        while(pq.size()==numlist){

         node front = pq.top();
            pq.pop();

            int l=front.data;

            int i=front.row;
            int j=front.col;
            
            j++;
            
            int r=max_ele;
            
            if(j<nums[i].size()){
              pq.push(node(nums[i][j],i,j));
         
            max_ele=max(max_ele,nums[i][j]);
            }

            if(r-l<ans[1]-ans[0])
            {
                ans[0]=l;
                ans[1]=r;
            }
        }

        cout<<ans[0]<<" "<<ans[1]<<endl;
        
    }

 
int main()
{
    int size;
    cout<<"Enter the size of the list: ";
    cin>>size;

    vector<vector<int>>nums(size);

    for(int i=0;i<size;i++){
        int n;
        cout<<"Enter the size of the list: ";
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            nums[i].push_back(x);
        }
    }

 smallestRange(nums);
    return 0;
}