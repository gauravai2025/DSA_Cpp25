    #include <bits/stdc++.h>
    using namespace std;

    int main() {
    pair<int,int>p_array[3];  // pair array each index contains a pair
    p_array[0]={2,5};
    p_array[1]={1,8};
    p_array[2]={6,9};
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    cout<<endl;
    swap(p_array[0],p_array[2]);  // first and 3rd pair swap
      for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    return 0;

    }
