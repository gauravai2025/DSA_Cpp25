#include<iostream>
using namespace std;
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
return 0;
}