
// std::is_sorted
// without binary predicate
#include <bits/stdc++.h>
int main()
{
	int A[] = { 10, 11, 15, 12 };

	// Index 0 to 2
	int range1 = 3;

	// Index 0 to 3
	int range2 = 4;

	// Condition if container is sorted or not in range1
	if (std::is_sorted(A, A + range1)) {
		std::cout << "Sorted in the range : " << range1 << std::endl;
	} else {
		std::cout << "Not Sorted in the range : " << range1 << std::endl;
	}

	// Condition if container is sorted or not in range2
	if (std::is_sorted(A, A + range2)) {
		std::cout << "Sorted in the range : " << range2 << std::endl;
	} else {
		std::cout << "Not Sorted in the range : " << range2 << std::endl;
	}
	return 0;
}
