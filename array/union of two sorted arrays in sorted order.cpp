#include<bits/stdc++.h>
using namespace std;

  //Function to return the count of number of elements in union of two arrays.
    void  doUnion(int a[], int n, int b[], int m)  {
       
        set<int>st; // time complexity O(n+mlog(n+m)

        for(int i=0;i<n;i++) // space complexity O(n+m)
        st.insert(a[i]); 

          for(int i=0;i<m;i++)
        st.insert(b[i]);

        for(auto it:st){
		cout<<it<<" ";
       } 

    }
 
int main()
{

    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    cout<<"enter element in sorted order"<<endl;

    for(int i = 0;i<n;i++)
        cin >> a[i];
        
    for(int i = 0;i<m;i++)
        cin >> b[i];
   
    doUnion(a, n, b, m);

    return 0;
}