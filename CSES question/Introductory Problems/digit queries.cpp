#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    int query;
    cin>>query;

    while(query--){
        long long int k;
        cin>>k;
        long long int val=0;
         int len=1;

        while(val<k){
long long int curr = len * 9 * (long long int)pow(10ll, len - 1);

         if(val+curr>=k){
             break;
         }

            val+=curr;
            len++;


        }

        k=k-val;
        // cout<<len<<endl;
        long long int step=(k/len);
        long long last_num=(long long int)pow(10ll,len-1)-1+step;
        
        long long int rem=k%len;

        // cout<<last_num<<endl;

        if(rem){
        last_num++;
        string str=to_string(last_num);
        cout<<str[rem-1]<<endl;
        }

        elsevs
        cout<<last_num%10<<endl;
    }
 
 
 
    return 0;
}