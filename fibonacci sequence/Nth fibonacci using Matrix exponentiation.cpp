#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mod = 1e9+7;    // time complexity d^3*log(n)  d dimension of matrix

void matrix_multiplication(vector<vector<ll>>&base, vector<vector<ll>>&result, ll row, ll col) {

    vector<vector<ll>>temp(row,vector<ll>(col,0));
  
    for (int i = 0; i <row; i++) {
        for (int j = 0; j <col; j++) {
           ll val= 0;
            for (int k = 0; k <col; k++) {
              val+= (base[i][k] * result[k][j]) % mod;
                val%=mod;
            }
            temp[i][j] = val;
        }
    }

    // Copy the result into matrix C
    for (int i = 0; i <row; i++) {
        for (int j = 0; j <col; j++) {
            result[i][j] = temp[i][j];
        }
    }

  
}

void matrix_exponentiation(vector<vector<ll>>&base,vector<vector<ll>>&result, ll row,ll col, ll exp) {

    while (exp > 0) {
        if (exp&1) {
            matrix_multiplication(base, result, row,col);
        }
        matrix_multiplication(base, base, row,col);
        exp >>= 1;
    }

}

int main() {

int t;
cin >> t;
while (t--){
    int a,b,n;
    cin>>a>>b>>n;
  
 
    vector<vector<ll>>mat(2,vector<ll>(2,0));
    vector<vector<ll>>result(2,vector<ll>(2,0));
    
    for (ll i = 0; i < 2; i++) {
        for (ll j = 0; j <2; j++) {
            if(i==0 && j==0)
            mat[i][j]=0;
            else 
            mat[i][j]=1;
        }
    }

    // Initialize result as the identity matrix
    for (ll i = 0; i < 2; i++) {
        for (ll j = 0; j <2; j++) {
            result[i][j] = (i == j) ? 1 : 0;
        }
    }

   

    matrix_exponentiation(mat, result, 2,2, n);

    vector<vector<long long int>>fib0={{a,b}};

    matrix_multiplication(fib0,result, 1,2);

    cout<<result[0][0]<<endl;
        
    

}

    return 0;
}
