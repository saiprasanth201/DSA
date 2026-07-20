/* Day 51 */

//Print Name N Times.

void printName(int count, int n){
    if(count > n){          // Base case
        return;
    }
    cout << "sai" << endl;
    printName(count+1, n);     // this will run until it reaches the base case.
}

//Print numbers from 1 to N.

void printNumbers(int n){
    if(n == 0){
        return;
    }
    printNumbers(n-1);
    cout << n << endl;
}

//Print numbers from N to 1.

void printNumbers(int n){
    if(n == 0){
        return;
    }
    cout << n << endl;
    printNumbers(n-1);
}

//Sum of first N natural numbers.

int sum(int n)
{
    if(n == 0)
        return 0;

    return n + sum(n-1);
}

//Factorial of a number.

int factorial(int n)
{
    if(n == 0)
        return 1;

    return n * factorial(n - 1);
}

//Fibonacci series.

class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        else{
            return fib(n-1)+fib(n-2);
        }
    }
};