#include<bits/stdc++.h>
using namespace std;

int findDeterminant(vector<vector<long long int>>Matrix){
  
    int det = 0;

    if (Matrix.size() == 1){
        return Matrix[0][0];
    }

    else if (Matrix.size() == 2){
        det = (Matrix[0][0] * Matrix[1][1] - Matrix[0][1] * Matrix[1][0]);
        return det;
    }


    else{

        for (int p = 0; p < Matrix[0].size(); p++){
            vector<vector<long long int>> tempMatrix;
            for (int i = 1; i < Matrix.size(); i++){
                vector<long long int> row;
                for (int j = 0; j < Matrix[i].size(); j++){
                    if (j != p){
                        row.push_back(Matrix[i][j]);
                    }
                }


                if (row.size() > 0){
                    tempMatrix.push_back(row);
                }
            }


            det = det + Matrix[0][p] * pow(-1, p) * findDeterminant(tempMatrix);
        }
        return det;
    }
}


long long int total_spanning(vector<vector<long long int>>&graph,int vertices){

vector<int>degree(vertices,0);

  for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            if(graph[i][j]==1)
            {
             degree[i]++;
            }
        }
  }

    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){

            if(i==j)
            graph[i][j]=degree[i];
            else if(graph[i][j]==1)
            graph[i][j]=-1;
        }
  }

  // calculate co-factor of modified adjacency matrix

  vector<vector<long long int>>cofactor(vertices-1,vector<long long int>(vertices-1,0));


   for(int i=1;i<vertices;i++){
        for(int j=1;j<vertices;j++){

         cofactor[i-1][j-1]=graph[i][j];
        }
 }
 
long long int cntspning=findDeterminant(cofactor); 

return cntspning;

}
 
int main()
{

int vertices,edge;
// cout<<"Enter the number of vertices and edges: \n";
cin>>vertices>>edge;

vector<vector<long long int>>graph(vertices,vector<long long int>(vertices,0));

while(edge--){
   int u,v;
   cin>>u>>v;
   graph[u][v]=1;
   graph[v][u]=1;

} 

cout<<"number of spaning tree: "<<total_spanning(graph,vertices);
    return 0;
}