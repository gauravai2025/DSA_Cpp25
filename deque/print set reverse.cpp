// C++ program to demonstrate the
// multiset::crend() function
#include <bits/stdc++.h>
using namespace std;
int main()
{

	int arr[] = { 14, 12, 15, 11, 10, 10, 16, 16 };

	// initializes the set from an array
	multiset<int> s(arr, arr + 8);

	// prints all elements in set
	for (auto it = s.crbegin(); it != s.crend(); it++)
		cout << *it << " ";

	return 0;
}
