#include<bits/stdc++.h>
using namespace std;
 
  void findTheWinner(int n, int k) {
        queue<int> que;
        for (int i = 1; i <= n; i++) {
            que.push(i);
        }

        while (que.size() >0) {

            for (int count = 1; count <= k; count++) {
                que.push(que.front());
                que.pop();
            }
            
            cout<<que.front()<<" ";
            que.pop();
        }

       
    }

int main()
{

int n,k;
cin>>n>>k;

 findTheWinner(n,k);
 
 
    return 0;
}