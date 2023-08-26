
#include <bits/stdc++.h>
using namespace std;


int nthCatalan(int k){
    vector<int> catalanNum(k,0);
    catalanNum[0]=catalanNum[1]=1;
    for(int i=2;i<=k;i++){
        for(int j=0;j<i;j++){
            catalanNum[i]+=catalanNum[j]*catalanNum[i-j-1];
        }
    }

    return catalanNum[k];
}

int validParentheses(int N){
    int k=N/2;
    return nthCatalan(k);
}
int main()
{
    cout<<"Enter the length of string: ";
    int n;
    cin>>n;
    if(n&1)
    cout<<"Invalid length:  please enter even number of length\n";
    else
    cout<<validParentheses(n);
    return 0;
}