/Print numbers from 1 to N.

void printNumbers(int n){
    if(n == 0){
        return;
    }
    printNumbers(n-1);
    cout << n << endl;
}