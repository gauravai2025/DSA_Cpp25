#include<bits/stdc++.h>
using namespace std;

int sameOccurrence(vector<int>& arr, int x, int y) {
    
    unordered_map<int,int>mp;
    
    int size=arr.size();
    mp[0]++;
    
    int ans=0;
    int cntx=0,cnty=0;
    
    for(int i=0;i<size;i++){
        
        if(arr[i]==x)
        cntx++;
        
        if(arr[i]==y)
         cnty++;
        
        ans+=mp[cntx-cnty];
        
       mp[cntx-cnty]++;
    }
    
    return ans;
       
    }
 
int main()
{
    int n, x, y;
    cout << "Enter the size of the array\n";
    cin >> n;
    cout << "Enter the value of x and y\n";
    cin >> x >> y;
    vector<int> arr(n);
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << sameOccurrence(arr, x, y);
 
    return 0;
}