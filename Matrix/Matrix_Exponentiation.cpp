#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mod = 1e9+7;    // time complexity d^3*log(n)  d dimension of matrix

void matrix_multiplication(ll** A, ll** B, ll** C, ll row, ll col) {
    ll** ans = new ll*[row];
    for (int i = 0; i < row; i++) {
        ans[i] = new ll[col];
        for (int j = 0; j < col; j++) {
            ans[i][j] = 0;
            for (int k = 0; k < col; k++) {
                ans[i][j] = (ans[i][j] + A[i][k] * B[k][j] % mod) % mod;
            }
        }
    }

    // Copy the result into matrix C
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            C[i][j] = ans[i][j];
        }
    }

    // Free the memory allocated for ans
    for (int i = 0; i < row; i++) {
        delete[] ans[i];
    }
    delete[] ans;
}

void matrix_exponentiation(ll** base, ll** result, ll row, ll col, ll exp) {
    ll** temp = new ll*[row];
    for (int i = 0; i < row; i++) {
        temp[i] = new ll[col];
        for (int j = 0; j < col; j++) {
            temp[i][j] = result[i][j];
        }
    }

    while (exp > 0) {
        if (exp % 2 == 1) {
            matrix_multiplication(temp, base, result, row, col);
        }
        matrix_multiplication(base, base, base, row, col);
        exp /= 2;
    }

    // Free the memory allocated for temp
    for (int i = 0; i < row; i++) {
        delete[] temp[i];
    }
    delete[] temp;
}

int main() {
    ll row, col;
    cout << "Enter number of rows of the matrix:\n";
    cin >> row;
    cout << "Enter number of columns of the matrix:\n";
    cin >> col;

    if(row!=col){
        cout<<"enter square matrix\n";
        return 0;
    }

    ll** mat = new ll*[row];
    ll** result = new ll*[row];
    for (int i = 0; i < row; i++) {
        mat[i] = new ll[col];
        result[i] = new ll[col];
    }

    cout << "Enter matrix elements:\n";
    for (ll i = 0; i < row; i++) {
        for (ll j = 0; j < col; j++) {
            cin >> mat[i][j];
        }
    }

    // Initialize result as the identity matrix
    for (ll i = 0; i < row; i++) {
        for (ll j = 0; j < col; j++) {
            result[i][j] = (i == j) ? 1 : 0;
        }
    }

    ll n;
    cout << "Enter nth value:\n";
    cin >> n;

    matrix_exponentiation(mat, result, row, col, n);

    cout << "Resultant matrix after exponentiation:\n";
    for (ll i = 0; i < row; i++) {
        for (ll j = 0; j < col; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    // Free the memory allocated for mat and result
    for (int i = 0; i < row; i++) {
        delete[] mat[i];
        delete[] result[i];
    }
    delete[] mat;
    delete[] result;

    return 0;
}
