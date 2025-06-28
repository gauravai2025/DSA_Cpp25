#include<bits/stdc++.h>
using namespace std;


    int factorial(int n){
       
        if(n<=1)
        return 1;

        return n*factorial(n-1);
    }

    void kth_permutation(string &str,int len,string &kthprm,int k,int fact){
    
    if(len-1==0 || k==0){
    reverse(str.begin(),str.end());
    kthprm+=str;
    return ;
    }


    int val=ceil(1.0*k/fact);
    kthprm.push_back(str[val-1]);

    str.erase(val - 1, 1);

    k%=fact;
    fact/=len-1;

    kth_permutation(str,len-1,kthprm,k,fact);
      
    }


    string getPermutation(int n, int k,int fact) {
        string str="";
         
        for(int i=1;i<=n;i++){
        str+=to_string(i);
        }
        
       string kthprm="";

     kth_permutation(str,n,kthprm,k,fact);
        
      return  kthprm;
    }
 
int main()
{

int n,k;
cin>>n>>k;

int factv=factorial(n-1);
cout<<getPermutation( n,  k,factv);
    return 0;
}