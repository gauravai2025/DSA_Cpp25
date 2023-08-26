#include <iostream>
using namespace std;

double sumHP(double a, double d, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += 1.0 / (a + i * d);
    }
    return sum;
}

int main() {
    double firstTerm = 1.0; // Replace with the first term of the HP series
    double commonDiff = 1; // Replace with the common difference
    int numberOfTerms = 128; // Replace with the number of terms

    double result = sumHP(firstTerm, commonDiff, numberOfTerms);
    cout << "Sum of the HP series: " << result << endl;

    return 0;
}
