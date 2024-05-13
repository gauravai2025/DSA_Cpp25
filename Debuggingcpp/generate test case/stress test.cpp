#include<bits/stdc++.h>
using namespace std;

void wrong_try( int n,int k,vector<int>&vw){
    int ans=0;
     for(int i=1;i<=n;i++){
	        if((i*k)<=n){
	            ans=i;
	        }
	    }
	    
	    int x=ans;
	    
	    while(k--){
	    vw.push_back(ans);
	        ans+=x;
	    }
}

void right_try(int n,int k,vector<int>&vr){
    int ans=0;
     for(long long int i=1;i<=n;i++){
	        if((i*k)<=n){
	            ans=i;
	        }
	    }
	    
	    int x=ans;
	    
	    while(k--){
	    vr.push_back(ans);
	        ans+=x;
	    }
}
 

int main()
{
// generate random number between 1 to 100 for number of test case
// srand(time(0));
srand(time(NULL));
int t=rand()%100+1;
// cout<<t<<endl;
while(t--){
int n=rand()%100000+1;
int q=rand()%100000+1;

vector<int>vr;
vector<int>vw;
right_try(n,q,vr);
wrong_try(n,q,vw);
int size=vr.size();


for(int i=0;i<size;i++){
if(vr[i]!=vw[i]){
    cout<<n<<" "<<q<<"  these are testcase where wrong answer"<<endl;
   

    break;
}
}

}

    return 0;
}