#include<bits/stdc++.h>
using namespace std;

 typedef vector<double> v;
 typedef long long int ll;

    void sortedPrimeFraction(vector<ll>& arr) {

        int size=arr.size();

        priority_queue<v,vector<v>,greater<v>>pq;

        for(int i=0;i<size-1;i++){
            pq.push({(1.0*arr[i]/arr[size-1]),1.0*i,1.0*(size-1)});
        }

        
        while(!pq.empty()){
            
        auto v= pq.top();
        pq.pop();
            
        cout<<v[0]<<" ";

         int i=v[1];
          int j=v[2];
          j--;

          if(j>i)
           pq.push({(1.0*arr[i]/arr[j]),1.0*i,1.0*j});

        }

    }
 
int main()
{
     int size;
    cout << "enter size of array\n";
    cin >> size;

    vector<ll> arr(size, 0);

    cout<<"You are given a sorted integer array arr containing 1 and prime numbers, where all the integers of arr are unique. You are also given an integer k\n";

cout<<"For every i and j where 0 <= i < j < arr.length, we consider the fraction arr[i] / arr[j].\n";

    cout << "enter element of array\n";

    for (int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"sorted order fraction: \n";

    sortedPrimeFraction(arr);
 
    return 0;
}