// ======= QUESTION ======================================================================

// 1. You are given a number x.
// 2. You are given another number n.
// 3. You are required to calculate x raised to the power n. Don't change the signature of power function .

// ! Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

// ? Input Format
// A number x
// A number n

// ? Output Format
// x raised to the power n


// ======= SLOUTION ======================================================================


#include <iostream>
using namespace std;
int powerLiner(int num, int power){
    if(power == 0)
    return 1;
    int currPower = powerLiner(num, power-1);
    int finalValue = currPower * num;
    return finalValue;
    
}

int main(){
    int num;
    cin>>num;
    int power;
    cin>>power;
    int value = powerLiner(num, power);
    std::cout << value << std::endl;
}