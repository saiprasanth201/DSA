                                
#include <bits/stdc++.h>
using namespace std;
//int main(){

//COUNT NUMBER:

// Function to count the number
// of digits in an integer 'n'.
//int countDigits(int n){
    // Initialize a counter variable
    // 'cnt' to store the count of digits.
   // int cnt = 0;
    // While loop iterates until 'n'
    // becomes 0 (no more digits left).
  //  while(n > 0){
        // Increment the counter
        // for each digit encountered.
     //   cnt = cnt + 1;
        // Divide 'n' by 10 to
        // remove the last digit.
       // n = n / 10;
   // }
    // Return the
    // count of digits.
   // return cnt;
// }



// int main() {
//     int N = 329823;
//     cout << "N: "<< N << endl;
//     int digits = countDigits(N);
//     cout << "Number of Digits in N: "<< digits << endl;
//     return 0;
// }



//REVERSE NUMBER:
// class Solution {
// public:
//     int reverse(int x) {
//        int revNum =0;
//        while(x > 0){
//         int lastDigit = x % 10;
//         revNum = (revNum * 10) + lastDigit;
//         x = x / 10;
//        } 
//        if(revNum>INT_MAX || revNum<INT_MIN) return 0; 
//        if(x < 0){x = x*(-1); }
//         return int(revNum);
//     }
// };


//PALINDROME:
//  int n;
//  cin >> n;
//  int revNum = 0;
//  int dup = n;
//  while(n>0){
//     int Ld = n % 10;
//     revNum = (revNum*10)+Ld;
//     n= n/10;
//  }
//  if(dup == revNum)cout << "true";
//   else  cout << "false";


//ARMSTRONG NUMBER:

// int n,r,sum = 0,temp;
// cout << "enter the number:";
// cin >> n;
// temp = n;
// while (n>0)
// {
//     r = n % 10;
//     sum += round(pow(r,3)) ;
//     n = n/10;
// }
// if(temp == sum ){
//     cout << "Armstrong Number !";
// }
// else{
//     cout << "Not an Armstrong Number ! ";
// }
// return 0;


//PRINT ALL DIVISORS:

// void printDivisors(int n){
//     for(int i = 1; i <= n; i++){
//         if(n % i == 0){
//             cout << i << " ";
//         }
//     }
// }
// int main(){
//     int n;
//     cin >> n ;
//     printDivisors(n);
//     return 0;
// }

// PRIME OR NOT:

// bool checkPrime(int n){
//     int cnt = 0;
//     for(int i = 1; i <= sqrt(n); i++){
//         if(n%i == 0){
//             cnt = cnt+1;
//         }if(n/i != i){
//             cnt = cnt + 1;
//         }
//     }

// if(cnt == 2){
//     return true;
// }
// else{
//     return false;
//     }
// }


// int main(){
//     int n ;
//     cin >> n;
//     bool isPrime = checkPrime(n);
//     if(isPrime){
//         cout << n <<" Prime number !";
//     }
//     else{
//         cout << n << " Not a Prime !";
//     }
//     return 0;
// }


// GCD OF A NUMBER:

// int findGcd(int n1,int n2){
//     int gcd = 1;
//     for(int i = 1; i<= min(n1,n2); i++){
//         if(n1 % i == 0 && n2 % i == 0){
//             gcd = i;
//         }
//     }
//     return gcd;
// }
// int main(){
//     int n1,n2;
//     cin >> n1 >> n2;
//     int gcd = findGcd(n1,n2);
//     cout << " GCD of " << n1 << " and " << n2 << " is " << gcd;
//     return 0;
// }


// EUCLIDEAN ALGORITHM :

// int GCD( int a, int b){
//     while(a > 0 && b > 0){
//         if(a>b) a = a % b;
//         else b = b % a;
//     }
//     if ( a == b) return b;
//     return a;
//     }
// }





















