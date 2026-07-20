//Print Name N Times.

void printName(int count, int n){
    if(count > n){          // Base case
        return;
    }
    cout << "sai" << endl;
    printName(count+1, n);     // this will run until it reaches the base case.
}