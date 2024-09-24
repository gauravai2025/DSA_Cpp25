#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>directions={{0,1},{1,0},{0,-1},{-1,0}};
void dfs(vector<vector<int>>& image, int sr, int sc, int color,int originalcolor){

    image[sr][sc]=color;

    for(int i=0;i<4;i++){
     int xnew=sr+directions[i][0];
     int ynew=sc+directions[i][1];

      // checking boundary condition and 
     if(xnew>=0 && xnew<image.size() && ynew>=0 && ynew<image[0].size() && image[xnew][ynew]==originalcolor && image[xnew][ynew]!=color){
         dfs(image,xnew,ynew,color,originalcolor);
     }

    }

}


 void floodFill(vector<vector<int>>& image, int sr, int sc, int color,int originalcolor) {

    dfs(image,sr,sc,color,originalcolor);
        
    }
 
int main()
{

int row,col;
cin>>row>>col;

cout<<"enter row and column\n";

vector<vector<int>>image(row,vector<int>(col,0));

int sr,sc,colorchange;

cout<<"enter source row, source column and color\n";
cin>>sr>>sc>>colorchange;

int originalcolor=-1;

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>>image[i][j];

        if(i==sr && j==sc)
        originalcolor=image[i][j];
    }
 
}
 

 floodFill(image,sr,sc,colorchange,originalcolor);

 cout<<"modified image after floodfill apply: \n";

 for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<image[i][j]<<' ';
    }
    cout<<endl;
}
 
    return 0;
}