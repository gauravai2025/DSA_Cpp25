#include<bits/stdc++.h>
using namespace std;

  int numRescueBoats(vector<int>& people, int limit) {
    sort(people.begin(),people.end());
    int right=people.size()-1;
    int ans=0,left=0;

    while(left<=right){

        if(people[left]+people[right]<=limit){
        left++;
        right--;
        }
        else
        right--;
        ans++;
    }
    return ans;
        
    }

 
int main()
{

int n,limit;
cin>>n>>limit;

vector<int> arr(n);

for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<numRescueBoats(arr,limit);
    return 0;
}