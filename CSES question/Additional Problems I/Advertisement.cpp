#include<bits/stdc++.h>
using namespace std;

void next_smaller_right(vector<int>&nxtsmrg,vector<int>& heights){

      int size=heights.size();
      stack<int>st;
      st.push(-1);

    for(int i=size-1;i>=0;i--){
        while(st.top()!=-1 && heights[st.top()]>=heights[i]){
            st.pop();
        }
      
      nxtsmrg[i]=st.top();

      st.push(i);


    }

}


void next_smaller_left(vector<int>&nxtsmlf,vector<int>& heights){

      int size=heights.size();
      stack<int>st;
      st.push(-1);

    for(int i=0;i<size;i++){
        while(st.top()!=-1 && heights[st.top()]>=heights[i]){
            st.pop();
        }
      
      nxtsmlf[i]=st.top();

      st.push(i);
    }

}

   long long  int largestRectangleArea(vector<int>& heights) {

        int size=heights.size();
        vector<int>nxtsmrg(size,0);
        vector<int>nxtsmlf(size,0);

        next_smaller_right(nxtsmrg,heights);
        next_smaller_left(nxtsmlf,heights);

       long long  int max_area=0;
        
        
 for(int i=0;i<size;i++){
    int left=nxtsmlf[i];
    int right=nxtsmrg[i];

    if(right==-1)
    right=size;

    int width=right-left-1;
    max_area=max(max_area,1ll*heights[i]*width);

 }

 return max_area;

    }
    
 
int main()
{

int n;
cin>>n;
vector<int>hgt(n);
for(int i=0;i<n;i++)
{
    cin>>hgt[i];
}

cout<<largestRectangleArea(hgt)<<endl;
 
 
 
    return 0;
}