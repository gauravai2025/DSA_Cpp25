#include <bits/stdc++.h>
using namespace std;
     bool valid(char ch) {
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return 1;
        }
        
        return 0;
    }
     char toLowerCase(char ch) {
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkPalindrome(string s)
{
       int start = 0;
    int e = s.length()-1;

    while(start<=e) {
        if(s[start] != s[e])
        {
            return 0;       
        }
        else{
            start++;
            e--;
        }
    }
    return 1;
}

    bool isPalindrome(string s) {
        
        //faltu character hatado
        string temp = "";
        
        for(int j=0; j<s.length(); j++) {   
            if(valid(s[j])) {
                temp.push_back(s[j]);
            }
        }
        
        //lowercase me kardo
        for(int j=0; j<temp.length(); j++) { 
            temp[j] = toLowerCase(temp[j]);
        }
        
        //check palindrome
        return checkPalindrome(temp);
    }
        int main(){
            cout<<"enter string : ";
            string str;
            cin>>str;
             if(isPalindrome(str))
             cout<<"palindrome";
             else
             cout<<"not palindrome";
    
    return 0;   
}
