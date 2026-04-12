#include<bits/stdc++.h>
using namespace std;


int findsubsequence(int *arr,int n){

    int cnt=1;
	
	for(int i=1;i<n;i++){
	    
    if(arr[i]%2!=arr[i-1]%2)
    cnt++;
	}
	
	return cnt;
}
 
int main()
{

    int n;
    cout<<"enter number of elments: ";
    cin>>n;

    int arr[n];

    cout<<"enter array elemnts: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"longest length: "<<findsubsequence(arr,n);

    return 0;
}