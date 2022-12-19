#include<iostream>
using namespace std;
bool palindrome(char ch[],int n){
    int st=0,end=n-1;
    while(st<=end){
        if(ch[st]!=ch[end])
        return 0;
        else{
        st++; 
        end--;
        }
    }
     return 1;
}
void reversestr(char ch[],int n){
    int start=0,end=n-1;
    while(start<end){
        swap(ch[start],ch[end]);
        start++;
        end--;
    }
    cout<<ch<<endl;
}

int getlength(char ch[]){
     int i=0;
    while(ch[i]!='\0'){  // for(int i=0;ch[i]!='\0')
        i++;
    }
    return i;
}

int main(){
    char ch[100];
    cout<<"enter string without space\n";
    cin>>ch;
     int n=getlength(ch);
  reversestr(ch,n);
  if(palindrome(ch,n))
  cout<<"palindrome";
  else
  cout<<" not palindrome";
  cout<<endl;
 return 0;

}