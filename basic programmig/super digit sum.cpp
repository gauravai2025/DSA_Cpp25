#include<bits/stdc++.h>
using namespace std;

int superDigit(string n) {
    long long int sum=0;
    for(int i=0;i<n.size();i++){
        sum+=n[i]-'0';
    }
    long int sumf=0;
    while(true){
        if(sum==0 && sumf<=9){
        break;
        }
        if(sum==0 && sumf>=10){
        sum=sumf;
        sumf=0;
        }
        sumf+=sum%10;
        sum/=10;
        
    }
    return sumf;

}

 
int main()
{
    string str;
    cout<<"enter number\n";
    cin>>str;
    cout<<"super digit is:"<<superDigit(str);
    return 0;
}




