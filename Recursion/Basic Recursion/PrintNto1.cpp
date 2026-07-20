//Print numbers from N to 1.

void printNumbers(int n){
    if(n == 0){
        return;
    }
    cout << n << endl;
    printNumbers(n-1);
}