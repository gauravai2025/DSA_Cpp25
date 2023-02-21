    #include <bits/stdc++.h>
      using namespace std;

      int main() {
          int x;
          vector<int>v;
        cout<<"enter number of element\n";
        int n;
        cin>>n;
        cout<<"enter element of vector\n";
        // loop input
        for(int i=1;i<=n;i++){
            cin>>x;
            v.push_back(x);
        }
 cout<<"entered vector\n";
 // loop print 
  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  // iterator print 
  for(auto it:v){
    cout<<it<<" ";
  }
  cout<<endl;
  return 0;
    }