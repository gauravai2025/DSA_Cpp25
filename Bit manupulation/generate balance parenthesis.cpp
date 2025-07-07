#include<bits/stdc++.h>
using namespace std;
 
    //    bool isvalid(string &str){
    //     int open=0;

    //    for(char ch:str){
    //     if(ch=='(')
    //     open++;
    //     else {
    //      if(open==0)
    //      return 0;
    //      open--;   
    //     }
    //    } 

    //    return open==0;

    // }

    // void balanceparenthesis(int n){

    // vector<string>ans;
    // for(int i=0;i<(1<<2*n);i++){
    //     string otpt="";
    //     for(int j=0;j<2*n;j++){
    //         if(i&(1<<j))
    //         otpt.push_back('(');
    //         else
    //       otpt.push_back(')');
    //     }

    //     if(isvalid(otpt))
    //     ans.push_back(otpt);
    // }  

    // cout<<"All possible balanced parenthesis of length "<<2*n<<" are: \n";
    // for(auto it:ans){
    //     cout<<it<<endl;

    // }
       
    // }

    void generateParenthesis(int n) {
    vector<string> ans;
      for(int i=0;i<(1<<2*n);i++){
        string otpt="";
        bool isvalid=1;
        int open=0;
        for(int j=0;j<2*n;j++){
            if(i&(1<<j)){
            otpt.push_back('(');
            open++;
            }
            else{
            if(open==0){
              isvalid=0;
              break;  
            } 
            else{   
          otpt.push_back(')');
          open--;
            }
            
            }
        }

        if(isvalid && open==0)
        ans.push_back(otpt);
    }  

    // Output result
    cout << "Valid Parentheses Combinations:\n";
    for (const string &s : ans)
        cout << s << endl;
}


int main()
{

int n;
cout<<"Enter the number of opening brackets: \n";
cin>>n;

generateParenthesis(n);

return 0;
}