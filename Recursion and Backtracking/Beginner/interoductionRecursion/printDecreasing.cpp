// ======= QUESTION ======================================================================

// 1. You are given a positive number n.
// 2. You are required to print the counting from n to 1.
// 3. You are required to not use any loops. Complete the body of print Decreasing function to achieve it.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

// Constraints
// 1 <= n <= 1000

// Format
// Input
// A number n

// Output
// n
// n - 1
// n - 2
// ..
// 1


// ======= SLOUTION ======================================================================


#include <bits/stdc++.h>
using namespace std;

void printDecresing( int value)
{
    if (value == 0)
        return;
    std::cout << value << std::endl;
    printDecresing(value -1);
}

int main()
{
    long long int num;
    cin>>num;
    printDecresing(num);
    return 0;
}