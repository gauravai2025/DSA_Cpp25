#include<bits/stdc++.h>
using namespace std;
   
string multiply(string s1,string s2){

    int l1=s1.length();
    int l2=s2.length();
     int rslt[l1+l2]={0};
    int i=l1-1;
    int pf=0;

   string ans="";
   int chk1=0;

   if(s1[0]=='-')
      chk1++;

        int chk2=0;
        if(s2[0]=='-')
        chk2++;

    while(i>=chk1){
        int ival=s1[i]-'0';
        i--;
        int j=l2-1;
        int k=l1+l2-1-pf;
         int carry=0;
        while(j>=chk2 || carry!=0){
             int jval;
            if(j>=chk2)
             jval  =s2[j]-'0';
            else
            jval=0;
            j--;
            int product=ival*jval+carry+rslt[k];
            rslt[k]=product%10;
            carry=product/10;
            k--;

        }
        pf++;


    }
    // since result array contain 0 at the begining so we have to find the first non zero element
    bool flag=0;
    for(int i=0;i<l1+l2;i++){
        if(rslt[i]==0 && flag==0)
        continue;
        else{
        ans+=rslt[i]+'0';
        flag=1;
    }
    }
    if(chk1^chk2)
    ans="-"+ans;
    return ans;
   
}

int main()
{
cout<<"enter two number\n";
string s1,s2;
cin>>s1>>s2;

string ans= multiply(s1,s2);

cout<<ans;

 return 0;
}