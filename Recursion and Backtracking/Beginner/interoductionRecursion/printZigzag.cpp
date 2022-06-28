// ======= QUESTION ======================================================================

// 1. Here are a few sets of inputs and outputs for your reference
// Input1 -> 1
// Output1 -> 1 1 1

// Input2 -> 2
// Output2 -> 2 1 1 1 2 1 1 1 2

// Input2 -> 3
// Output3 -> 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3

// 2. Figure out the pattern and complete the recursive function pzz to achieve the above for any positive number n.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is.Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

// ======= SLOUTION ======================================================================

#include <iostream>
using namespace std;

void towerOfHanoi(int num , int towerOne, int towerTwo, int towerThree){
    if(num == 0)
    return;
    towerOfHanoi(num - 1, towerOne, towerThree, towerTwo);
    std::cout << num << "[" << towerOne << "->" <<towerTwo << "]" std::<<endl;
    towerOfHanoi(num - 1, towerThree, towerTwo, towerOne);
}

int main(){
    int num;
    cin>>num;
    int towerOne, towerTwo, towerThree;
    cin>> towerOne;
    cin>> towerTwo;
    cin>> towerThree;
    towerOfHanoi(num, towerOne, towerTwo, towerThree);
}