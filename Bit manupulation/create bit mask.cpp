#include <iostream>
#include <bitset>
using namespace std;
int main() {
    // Create a mask where all even-positioned bits are unset and odd-positioned bits are set
    unsigned int masko = 0x55555555; // 5 is 0101 in binary, representing an odd bit pattern

    // Print the mask in binary for visualization
    cout << "Mask in binary: " <<bitset<32>(masko) <<endl;

      // Create a mask where all even-positioned bits are set and odd-positioned bits are unset
    unsigned int maske = 0xAAAAAAAA; // A is 1010 in binary, representing an even bit pattern

    // Print the mask in binary for visualization
    cout << "Mask in binary: " <<bitset<32>(maske) <<endl;

    return 0;
}
