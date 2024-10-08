#include<bits/stdc++.h>
using namespace std;

static bool cmp(string &s1, string &s2) {

        return (s1 + s2) > (s2 + s1);
    }

string largestlexiographically(vector<string>& nums) {

   sort(nums.begin(), nums.end(), cmp);

        string result = "";

        for ( string s : nums)
            result += s;
            
        return result;
    }
 
int main()
{

int num;
cout<<"enter number of string\n";
cin>>num;

vector<string>arr(num);

for(int i=0;i<num;i++){
    cin>>arr[i];
}
 
 cout<<largestlexiographically(arr);
 
 
    return 0;
}