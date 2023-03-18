    #include <bits/stdc++.h>
     using namespace std;
         void print1(vector<int>&v){
       
  for(int i=0;i<v.size();i++){ // call by value
    cout<<v[i]<<" ";
  }
  v.push_back(324);
      }

     void print(vector<int>v){
       
  for(int i=0;i<v.size();i++){ // call by value
    cout<<v[i]<<" ";
  }
  v.push_back(324);
      }

      int main() {
          int x;
          vector<int>v;
              vector<int>v2;
        cout<<"enter number of element\n";
        int n;
        cin>>n;
        cout<<"enter element of vector\n";
        // loop input
        for(int i=1;i<=n;i++){
            cin>>x;
            v.push_back(x);
        }
        v2=v; // copy vector v in vectpr v2
        vector<int>&v3=v2; // refrence copy
   cout<<"entered vector\n";

  print(v);
  cout<<endl;
  cout<<"after modification in vector in 1st function \n";
   print(v);
cout<<endl;
  print1(v);
  cout<<endl;
  cout<<"after modification in vector in second function \n";
   print1(v);
  return 0;
    }