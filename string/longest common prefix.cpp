#include<bits/stdc++.h>
using namespace std;


string longestCommonPrefix(vector<string>& arr,int size) {
        string ans="";
        bool flag;
        int size_of_first_string=arr[0].size();

        for(int i=0;i<size_of_first_string;i++){
            flag=1;
            for(int j=1;j<size;j++){
                if(arr[0][i]!=arr[j][i]  || i>arr[j].size()){
                    flag=0;
                }

            }
            if(flag)
            ans+=arr[0][i];
            else
            break;
        }
        return ans;
    }


 
int main()
{
cout<<"enter number of string \n";
int size;
cin>>size;
vector<string>arr(size);
cout<<"enter string\n";
for(int i=0;i<size;i++){
    cin>>arr[i];
}
 cout<<"longest common prefix: "<<longestCommonPrefix(arr,size)<<"\n";
 
 
    return 0;
}