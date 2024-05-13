#include<bits/stdc++.h>
using namespace std;
class student{
    public:  // by default private
    int roll;
    string name;
    char grade;
};
 
int main()
{

student s1; // creating object of class student
s1.roll=1;
s1.name="abc";
s1.grade='A';
cout<<s1.roll<<" "<<s1.name<<" "<<s1.grade<<"\n";
// creating array of object
student arr[2]  ; // array of object of class student
// taking input in array of object
cout<<"enter roll name and grade of 2 students\n";
for(int i=0;i<2;i++){
    cout<<"enter roll name and grade of student "<<i+1<<"\n";
    cin>>arr[i].roll>>arr[i].name>>arr[i].grade;
}

// printing array of object
for(int i=0;i<2;i++){
    cout<<arr[i].roll<<" "<<arr[i].name<<" "<<arr[i].grade<<endl;
}

vector<student>st; // vector of object of class student
// taking input in vector of object
cout<<"enter roll name and grade of 2 students\n";
for(int i=0;i<2;i++){
    cout<<"enter roll name and grade of student "<<i+1<<"\n";
    student s;
    cin>>s.roll>>s.name>>s.grade;
    st.push_back(s);
}
// printing vector of object
for(int i=0;i<2;i++){
    cout<<st[i].roll<<" "<<st[i].name<<" "<<st[i].grade<<"\n";
}
    return 0;
}