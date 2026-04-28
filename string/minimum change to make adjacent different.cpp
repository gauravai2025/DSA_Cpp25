// Change a minimum number of characters so that every pair of adjacent characters are distinct.

#include<bits/stdc++.h>
using namespace std;
 
int main()
{

    string str;
    cin>>str;
    char prev='0';
    int size=str.size();
    int cnt=1;

    for(int i=1;i<size;i++){

     if(str[i]==str[i-1])
     cnt++;

     else{
     // finding correct character to replace   
    char next=((str[i-1]-'a'+1)%26)+'a';

    if(next==str[i]) 
    next=((next-'a'+1)%26)+'a';

    if(prev!='0' && next==prev)
    next=((next-'a'+1)%26)+'a';
     
    int st=-1;

    if(cnt&1)
    st=i-cnt+1;
    else
    st=i-cnt;

    while(st<i && cnt>1){
      str[st]=next;
      st+=2;  
    }

    prev=str[i-1];
    cnt=1;

     }
    }

     char next=((str[size-2]-'a'+1)%26)+'a';

    if(next==str[size-1]) 
    next=((next-'a'+1)%26)+'a';

    if(prev!='0' && next==prev)
    next=((next-'a'+1)%26)+'a';
     
    int st=-1;
    
    if(cnt&1)
    st=size-cnt+1;
    else
    st=size-cnt;

    while(st<size && cnt>1){
      str[st]=next;
      st+=2;  
    }


    cout<<str<<endl;
    return 0;
}