#include <iostream>
using namespace std;
//create a function for reverse a number
int reverseNumber(int n,int reversedNum = 0){
   
     if (n == 0) {
        return reversedNum;
    } else {
        int lastDigit = n % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        return reverseNumber(n / 10, reversedNum);
    }
 }
int main(){

    //getting number from user
    int num;
    cout << "Enter a number: ";
    cin >> num;

    //call the function
     int reversedNum = reverseNumber(num);
     cout << "Reversed number: " << reversedNum << endl;


    return 0;
}