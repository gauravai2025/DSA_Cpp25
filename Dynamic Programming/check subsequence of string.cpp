#include <iostream>
using namespace std;




bool isSubSequence(string str1, string str2,int m,int n)
{  

    if (m == 0)
        return true;
    if (n== 0)
        return false;
 

    if (str1[m - 1] == str2[n - 1])
        return isSubSequence(str1, str2, m - 1, n - 1);
 

    return isSubSequence(str1, str2, m, n - 1);
}
 

int main() {

	cout<<"enter string\n";
    
	    string str1,str2;
	    cin>>str1>>str2;
	        int m=str1.size();
int n=str2.size();
	    if(isSubSequence(str1,str2,m,n) || isSubSequence(str2,str1,n,m))
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	    
	
	return 0;
}
