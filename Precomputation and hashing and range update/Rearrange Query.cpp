#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int>PII;
typedef pair<long,long>PLL;
typedef tuple<int,int,int>TUP;
const int inf=0x3f3f3f3f;
const long long INF=1e18;
const int mod=1e9+7;
const int N=2e5+10;
mt19937_64 rnd(time(0));
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
ull w[N],sa[N],sb[N];
int a[N],b[N];


void solve()
{
	int n,q;
    cin>>n>>q;
      
      // generate random number for each element
	for(int i=1;i<=n;i++){
     w[i]=rnd();
    }

	for(int i=1;i<=n;i++){
		cin>>a[i];
		sa[i]=sa[i-1]+w[a[i]];
	}

	for(int i=1;i<=n;i++){
		cin>>b[i];
		sb[i]=sb[i-1]+w[b[i]];
	}

	while(q--){
		int la,ra,lb,rb;
        cin>>la>>ra>>lb>>rb;

		if(sa[ra]-sa[la-1]==sb[rb]-sb[lb-1]) 
        printf("Yes\n");
		else
        printf("No\n");
	}

}


int main()
{
   
    solve();

    return 0;
}