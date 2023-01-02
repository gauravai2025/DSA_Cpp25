#include<iostream>
using namespace std;
bool palindrome(string str){
    int st=0,end=str.size()-1;
    while(st<=end){   // two pointer approach
        if(str[st]!=str[end])
        return 0;
        else{
        st++; 
        end--;
        }
    }
     return 1;
}
void reversestr(string str){
    int start=0,end=str.size()-1;
    while(start<end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
    cout<<str<<endl;
}
int main(){
   string str;
    cout<<"enter string without space\n";
    cin>>str;
  reversestr(str);
  if(palindrome(str))
  cout<<"palindrome";
  else
  cout<<" not palindrome";
  cout<<endl;
 return 0;

}