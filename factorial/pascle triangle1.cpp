#include <bits/stdc++.h>
using namespace std;
// time complexity is O(n^2)
//space complexity is O(n^2)
int main() {
	int t;
	cin>>t;
	while(t--){
	int num;
	cin >> num;	
    int mat[num][num];
	for(int i=0;i<num;i++){
        mat[i][0]=1;
        mat[i][i]=1;
		for(int j=1;j<i;j++){
                mat[i][j]=mat[i-1][j-1]+mat[i-1][j];
            }
		}
            for(int i=0;i<num;i++){
              for(int j=0;j<=i;j++){
                    cout<<mat[i][j]<<" ";
                }
		cout<<endl;
            }
	}
	
	return 0;
	}