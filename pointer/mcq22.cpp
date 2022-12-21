 #include<iostream>
using namespace std;

int main(){
      int arr[] = {11, 12, 13, 14, 15};
    cout << *(arr) << " " << *(arr + 3);
  int *ptr = arr+1;  // ar++ wrong array address cannot be changed
    cout << *ptr << endl;
}  