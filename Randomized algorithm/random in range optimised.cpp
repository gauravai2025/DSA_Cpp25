
#include <random>
#include <iostream>

// generating a random in range with equal probability of occuring of every element

int main()
{
long long int a,b;
std::cout<<"enter number range to generate random number: ";

std::cin>>a>>b;
std::random_device dev;
std::mt19937 rng(dev());
std::uniform_int_distribution<std::mt19937::result_type> dist6(a,b); // distribution in range [1, 6]
std::cout <<dist6(rng) << std::endl;
}