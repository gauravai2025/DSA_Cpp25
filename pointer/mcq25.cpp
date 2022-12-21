 #include<iostream>
using namespace std;

int main(){
     char arr[] = "abcde";
    char *p = &arr[0];
    p++;
    cout << p << endl;  
}