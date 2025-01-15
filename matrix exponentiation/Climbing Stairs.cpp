#include<bits/stdc++.h>
using namespace std;

// can only climb either one or two steps at a time.
// Suppose the number of stairs you need to climb is N. Also, let the number of ways you have of climbing those N stairs be M. Now, the number of stones required is equal to the number of 1's in the base-2 representation of (M modulo 1000000007).
// You should output the string “CORRECT” if they are correct, or “INCORRECT” if they are incorrect. intial guess G is given as input as number of stones required.
                                     //CODECHEF-  1600 // Climbing Stairs
                                     
const int mod=1e9+7;

void matrix_multiplication(vector<vector<long long >>&base,vector<vector<long long >>&rslt){
    
 vector<vector<long long>>temp(base.size(),vector<long long>(base[0].size(),0));

    for(int i=0;i<base.size();i++){
        for(int j=0;j<base[0].size();j++){
          long long   int val=0;
            for(int k=0;k<rslt[0].size();k++){
                val+=(1ll*base[i][k]*rslt[k][j])%mod;
                val%=mod;
                
            }
            
            temp[i][j]=val;
        }
    }
    
    // Copy the result into matrix C
    for (int i = 0; i <base.size(); i++) {
        for (int j = 0; j <base[0].size(); j++) {
            rslt[i][j] = temp[i][j];
        }
    }

    
}

void matrix_exponentiation(vector<vector<long long >>&base, vector<vector<long long >>&rslt,int n){
    
    while(n>0){
        
        if(n&1)
        matrix_multiplication(base,rslt);
        
         matrix_multiplication(base,base);
        
        n=n>>1;
    }
    
    
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n,g;
	    cin>>n>>g;
	    
	    vector<vector<long long int>>transition={{0,1},{1,1}};
	    vector<vector<long long int>>rslt={{1,0},{0,1}};
	    
	    matrix_exponentiation(transition,rslt,n);
	    
	    long long numways=rslt[0][0]+rslt[1][0];
	    
	    numways%=mod;
	    
	    int cnt=0;
	    
	    while(numways>0){
	        if(numways&1)
	        cnt++;
	        numways=numways>>1;
	    }
	   
	    if(cnt==g)
	    cout<<"CORRECT\n";
	    else
	     cout<<"INCORRECT\n";
	    
	}

return 0;

}
