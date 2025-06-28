#include<bits/stdc++.h>
using namespace std;

int numberOfTriangles(vector<vector<int>> &g,int n)
{
    int ans=0;
    
    for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
        if(g[i][j]==1 && g[k][i]==1 && g[j][k]==1 && i!=j && j!=k && k!=i )
        ans++;
    }
}

   }
    
return ans/3;   
}
 
int main()
{

    int size;
    cout<<"Enter the size of the matrix: ";
    cin>>size;

    vector<vector<int>>matrix(size,vector<int>(size,0)); // 2D vector of size size with all elements 0  // 

    cout<<"Enter the matrix: \n";

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>matrix[i][j];
        }
    }
    
    cout<<"Number of triangles in the matrix are: "<<numberOfTriangles(matrix,size)<<endl;
 
 
    return 0;
}