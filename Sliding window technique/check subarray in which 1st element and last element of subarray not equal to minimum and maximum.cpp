#include<bits/stdc++.h>
using namespace std;
 
 typedef long long int ll;
 // cinsider subarray l to r then a[l]!=min(al,al+1,...ar) and a[l]!=max(al,al+1,...ar)  and a[r]!=min(al,al+1,...ar)  and a[r!=max(al,al+1,...ar)

void checksubarray(vector<ll>&arr,int n){

   int l = 0, r = n - 1;
    int mn = 1, mx = n;

    while (l <= r) {

        if (arr[l] == mn) {
            l++;
            mn++;
        } 
        
        else if (arr[l] == mx) {
            l++;
            mx--;
        } 
        
        else if (arr[r] == mn) {
            r--;
            mn++;
        } 
        
        else if (arr[r] == mx) {
            r--;
            mx--;
        }
        
         else {
            break;
        }
    }
    
    if(l <= r){
        cout << l + 1 << " " << r + 1 << endl;
    } 
    
    else{
        cout << -1 << endl;
    }

}

int main()
{

 ll size;
 cout<<"enter size of array\n";
cin>>size;

vector<ll>arr(size);
cout<<"array element \n";

for(int i=0;i<size;i++){
    cin>>arr[i];
}

checksubarray(arr,size);
 
    return 0;
}