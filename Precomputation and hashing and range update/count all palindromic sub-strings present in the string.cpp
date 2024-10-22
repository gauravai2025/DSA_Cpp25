#include<bits/stdc++.h>
using namespace std;

  vector<int> manacher(string &s,int size) {
      string t = "#";
  
  for (int i=0;i<size;i++) {
    t += s[i];
    t += '#';
  }

  int n = t.size();
  vector<int> r(n);

  for (int i = 0, j = 0; i < n; i++) {
    if (2 * j - i >= 0 && j + r[j] > i) r[i] = min(r[2 * j - i], j + r[j] - i);
    while (i - r[i] >= 0 && i + r[i] < n && t[i - r[i]] == t[i + r[i]])
      r[i] += 1;
    if (i + r[i] > j + r[j]) j = i;
    r[i]--;
  }

  return vector<int>(begin(r) + 1, end(r) - 1);
}

bool isPalindrome(int l, int r, vector<int> &v_manacher) {
  return v_manacher[l + r] >= r - l + 1;
}

    int CountPS(string &s, int n) {
        // code here
        int ans=0;
    vector<int> v_manacher = manacher(s,n);
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            // if((j-i+1)>=2 && (isPalindrome(i, j, v_manacher))) // for substring size greater than 1
          if(isPalindrome(i, j, v_manacher)) // for substring size greater than 0 we can also count single character as palindromic substring
                ans++;

        }
    }
    
    return ans;

    }
 
int main()
{

    string s;
    cout<<"enter string\n";
    cin >>s;
    int n=s.size();
    cout<<"number of palindromic substring: "<<CountPS(s,n);
    return 0;
}