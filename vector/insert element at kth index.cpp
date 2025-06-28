#include <bits/stdc++.h>
using namespace std;

int main() {

	vector<int>arr={1,2,3};
	
	for(auto ele:arr){
	    cout<<ele<<" ";
	}
	
	cout<<endl;
	
  	 arr.resize(4);
	 int temp=arr[1];
	 arr[1]=4;
	
	for(int i=2;i<4;i++){
	    int temp2=arr[i];
	    arr[i]=temp;
	    temp=temp2;
	}
	
		for(auto ele:arr){
	    cout<<ele<<" ";
	}
	

}
