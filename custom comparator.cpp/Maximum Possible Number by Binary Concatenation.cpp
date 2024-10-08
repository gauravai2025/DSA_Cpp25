#include<bits/stdc++.h>
using namespace std;

    bool static cmp(string&a, string &b){
         return (a + b) > ( b+a);
    }
    
    int binaryToInteger(string& binaryString) {
    return stoi(binaryString, nullptr, 2);
}
    
    int maxGoodNumber(vector<int>& nums) {
        vector<string>str;
        
        for(int i=0;i<3;i++){
            int val=nums[i];
            string s="";
            while(val!=0){
                
                if(val&1){
                    s='1'+s;
                }
                
                else
                s='0'+s;
                
                val=val>>1;
            }
            
            str.push_back(s);
        }
        
        sort(str.begin(),str.end(),cmp);
        
        string ans="";
        
        for(int i=0;i<3;i++){
            ans+=str[i];
        }
        
        int rslt=binaryToInteger(ans);

        return rslt;
    }
 
int main()
{

    vector<int>nums(3,0);

    for(int i=0;i<3;i++){
        cin>>nums[i];
    }

    cout<<maxGoodNumber(nums);

    return 0;
}