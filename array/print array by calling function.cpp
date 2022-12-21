using namespace std;
int n;
void print_array(int a[]){
    cout<<"array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main() {
    cout<<"enter size of array"
;
cin>>n;
int a[n];
cout<<"enter element of array\n";
for(int i=0;i<n;i++){
    cin>>a[i];
}
print_array(a);
    return 0;
}