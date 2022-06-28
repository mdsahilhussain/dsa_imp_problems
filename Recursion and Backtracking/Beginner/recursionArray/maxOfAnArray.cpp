// *======= QUESTION ======================================================================

// 1. You are given a number n, representing the count of elements.
// 2. You are given n numbers.
// 3. You are required to find the maximum of input. 
// 4. For the purpose complete the body of maxOfArray function. Don't change the signature.

// Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

// ! Note -> The online judge can't force you to write the function recursively but that is what the spirit of question is. Write recursive and not iterative logic. The purpose of the question is to aid learning recursion and not test you.

// ? Input Format
// A number n
// n1
// n2
// .. n number of elements
// ? Output Format
// A number representing max


// *======= SLOUTION ======================================================================

#include <bits/stdc++.h>
using namespace std;

int  maxOfArray( int array[], int idx, int length){
    if(idx >= length){
        return INT_MIN;
    }
 int currMax = maxOfArray(array, idx+1, length);
 if(currMax > array[idx]){
     return currMax;
 }
 else{
     return array[idx];
 }
}

int main(){
   int sizeOfArray;
   cin>> sizeOfArray;
   int array[sizeOfArray];
   for(int i=0; i<sizeOfArray; i++){
       cin>>array[i];
   }
   int maxValue = maxOfArray(array, 0, sizeOfArray);
   std::cout<<maxValue<<std::endl;
}