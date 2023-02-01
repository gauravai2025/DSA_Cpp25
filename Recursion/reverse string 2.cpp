
#include <bits/stdc++.h>
using namespace std;

 void  rev(string &str,int i,int size){
    cout<<"code running: "<<str<<endl;
      if(i>=size/2)
      return;
      
      swap(str[i],str[size-1-i]);
      i++;
       rev(str,i,size);
       /* rev(str,++i,size);  rev(str,i++,size);
        wrong practice infinte loop no increment of value of i in post increment so avoid post increment / decrement in function paramrter / argument */
  }
int main() {
   cout<<"enter string\n";
   string str;
   cin>>str;
 rev(str,0,str.size());
cout<<"reversed string: "<<str;

    return 0;
}