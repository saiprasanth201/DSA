/*
TIME COMPLEXITY:

-> The rate at which the time taken increases with respect to the input size is called Time Complexity.

 * Compare at the worst case senario.
 * avoid constants.
 * avoid lower values.

-> Best Case: least number of operations/loops required !
-> Average Case: (Best case + Worst case)/2
-> Worst Case: most/Maximum number of operations/loops required !

* Big Oh -> worst case -> upper bound
* Theta  -> Average case -> avg complexity
* Omega  -> Best case -> lower bound

*/

/*
SPACE COMPLEXITY:

-> The auxiliary space  -> The space that you take to solve the problem
          +
      Input space       -> The space that you take to store the problem 

 * Memory Space
 * Big Oh Notation
      
  * Never do any thing to input/Never Manipulate the input and the given information !  
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=100;i*=2){
        cout<<i<<endl;
    }
}
