#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mod = 1e9+7;    // time complexity d^3*log(n)  d dimension of matrix

void matrix_multiplication(vector<vector<ll>>&base, vector<vector<ll>>&result, ll row, ll  col) {

    vector<vector<ll>>temp(row,vector<ll>(col,0));
  
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
           ll val= 0;
            for (int k = 0; k < col; k++) {
              val+= (base[i][k] * result[k][j]) % mod;
                val%=mod;
            }
            temp[i][j] = val;
        }
    }

    // Copy the result into matrix C
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = temp[i][j];
        }
    }

  
}

void matrix_exponentiation(vector<vector<ll>>&base, vector<vector<ll>>&result, ll row, ll col, ll exp) {

    while (exp > 0) {
        if (exp&1) {
            matrix_multiplication(base, result, row, col);
        }
        matrix_multiplication(base, base, row, col);
        exp >>= 1;
    }

}

int main() {

    int t;
    cin >> t;
    while (t--){

    ll row ;
    cout << "Enter number of dimension of the matrix:\n";
    cin >> row;

     ll n;
    cout << "Enter nth value:\n";
    cin >> n;
 
    vector<vector<ll>>mat(row,vector<ll>(row,0));
    vector<vector<ll>>result(row,vector<ll>(row,0));


    cout << "Enter matrix elements:\n";
    for (ll i = 0; i < row; i++) {
        for (ll j = 0; j <row; j++) {
            cin >> mat[i][j];
        }
    }

    // Initialize result as the identity matrix
    for (ll i = 0; i < row; i++) {
        for (ll j = 0; j <row; j++) {
            result[i][j] = (i == j) ? 1 : 0;
        }
    }

   

    matrix_exponentiation(mat, result, row, row, n);

    cout << "Resultant matrix after exponentiation:\n";

    for (ll i = 0; i < row; i++) {
        for (ll j = 0; j <row; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    }

    return 0;
}
