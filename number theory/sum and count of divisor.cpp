#include<iostream>
using namespace std;
int main(){
    cout<<"enter number: ";
    int num;
    cin>>num;
    int cnt=0,sum=0;
    // for(int i=1;i<=num;i++){  time complexity o(n)
    //     if(num%i==0){
    //         cout<<i<<endl;
    //         cnt++;
    //         sum+=i;
    //     }
    cout<<"divisors are:\n";
    for(int i=1;i*i<=num;i++){ // for(int i=1;i<=sqrt(n);i++)
        if(num%i==0){          // time complexity o(sqrt(n))
            cnt++;
            sum+=i;
            cout<<i<<endl;
            if(i!=num/i){
            cnt++;
            sum+=num/i;
            cout<<num/i<<endl;

        }  
        }
        
    }
        cout<<"No of divisor :"<<cnt<<" "<<"sum of divisor:"<<sum;
    
    return 0;
}