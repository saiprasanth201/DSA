// Recursion:-   when a function calls itself until a specific condition is met.

//Basic Understanding of Recursion:

// #include<bits/stdc++.h>
// using namespace std ;
//  int cnt = 0;
//  void print(){
//     if(cnt == 10) return;
//     cout << cnt << endl;
//     cnt ++;
//     print ();    
//  }
//  int main(){
//     print ();
//     return 0;
//  }


//Basic Recursion Problems:
// print name 5 times:

// #include<bits/stdc++.h>
// using namespace std ;

// int cnt = 0;
// void printName(string Name){
//     if(cnt == 5)
//     return ;
//     cout << Name  << endl;
    
//     cnt ++;
//     printName(Name);
// }
// int main (){
//     string Name = "Sai";
//     printName(Name);
//     return 0;
// }


// print linearly from 1 to N:

// #include<bits/stdc++.h>
// using namespace std ;
 
//  void print1toN(int i,int N){
//     if(i > N) return;
//     cout << i << endl;
//     print1toN(i+1,N);    
//  }
//  int main(){
//     int N;
//     cin >> N ;
//     print1toN(1,N);
//     return 0;
//  }


// Print from N to 1:

// #include<bits/stdc++.h>
// using namespace std;

// void func(int i, int n){
   
//    // Base Condition.
//    if(i<1) return;
//    cout<<i<<endl;

//    // Function call to print i till i decrements to 1.
//    func(i-1,n);

// }

// int main(){
  
//   // Here, let’s take the value of n to be 4.
//   int n = 4;
//   func(n,n);
//   return 0;

// }


// Sum of First N numbers :

// #include<bits/stdc++.h>
// using namespace std;
// int sum(int n){
//     if(n==0)return 0;
//     return n + sum(n-1);
// }
// int main(){
//     int n ;
//     cin >> n;
//     cout << sum(n) << endl;;
//     return 0;
// }


// Factorial of first n numbers :


//Method1:
// #include <iostream>
// using namespace std;
// int factorial(int X) {
//    int ans = 1;
//    for (int i = 1; i <= X; i++) {
//       ans = ans * i;
//    }
//    return ans;
// }
// int main() {
//    int X = 4;
//    int result = factorial(X);
//    cout << "The factorial of " << X << " is " << result;
// }

//Method2:
// #include<bits/stdc++.h>
// using namespace std;
// int fact(int n){
//     if(n==0)return 1;
//     return n * fact(n-1);
// }
// int main(){
//     int n ;
//     cin >> n;
//     cout << fact(n) << endl;;
//     return 0;
// }


// Check if a string is palindrome or not :

// #include<bits/stdc++.h>
// using namespace std;
// bool f(int i, string& s){
//     if(i>=s.size()/2)return true;
//     if(s[i]!= s[s.size()-i-1])return false;
//     return f(i+1,s);
// }
// int main(){
//     string s = "madam";
//     cout << f(0,s);
//     return 0;
// }


// fibonacci series :

// #include<bits/stdc++.h>
// using namespace std ;

// int f(int n){
//     if(n <= 1) return n;
//     int last = f(n-1);
//     int slast = f(n-2);
//     return last + slast;
// }
// int main(){
//     int n;
//     cin >> n;
//     cout << f(n);
//     return 0;
// }