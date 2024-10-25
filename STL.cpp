#include<bits/stdc++.h>
using namespace std;
int main(){
// PAIRS
    // pair<int,int> p = {1,3};
    // cout << p.first << " " << p.second;

    // pair<int,pair<int,int>> p = {1,{4,5}};
    // cout << p.first << " " << p.second.first << " " << p.second.second;

    // pair<int , int> arr[]= {{0,1},{2,3},{4,5},{5,6}};
    // cout << arr[2].first << "," << arr[2].second;



// VECTORS
    //    vector<int>v;
    //    v.push_back(1);
    //    v.emplace_back(2);

    //    vector<pair<int,int>>v;
    //    v.push_back({1,2});
    //    v.emplace_back({1,2});

    //    vector<int>v(5,100); //->{100,100,100,100,100}



//  ITERATORS
    //  -> Points to the memory where element is in.
    //{20,10,15,6,7}

    // 1) Declare,use,prints vector .

    // vector<int>::iterator it = v.begin();

    // vector<int>::iterator it = v.begin();
    // it++;
    // cout << *(it)<<" "; // first prints 20 then after it++ -> *(it)-> prints 10 as the it++ is used to shift the ptr 

    // it = it+2;
    // cout << *(it)<<" "; //  first prints 20 then after it++ -> *(it)-> prints 15 as the it+2 is used to shift the ptr 

    // end,reverse end,reverse begin. 
 
    // vector<int>::iterator it =v.end(); //points memory location which is right after the last element

    // vector<int>::iterator it =v.rend(); //points memory location which is right before the first element

    // vector<int>::iterator it =v.rbegin();// points memory location which is the last element

    // v.at,v.back, auto;

    // 2) Delete an element in vector.

    // v.erase(v.begin()+1); -> to erase a single number in vector.

    // v.erase(v.begin()+2,v.begin()+4); -? to earse multipple numbers in vectors.

    // 3) Insert function .

    // vector <int> v(2,100);  //{100,100}

    //v.insert (v.begin(),300); // {300,100,100}

    // 4) size of vector 

    // 5) POP

    // 6) SWAP

    // 7) Clear
//     

// PERMUTATION OF A NUMBER:

// string s ="222";
// do{
//     cout << s << endl;
// }while(next_permutation(s.begin(),s.end()));

    return 0;
}




// 1.  PAIRS
// 2.  VECTORS
// 3.  ITERATORS ->Declare,print,Delete,insert,sizeof,swap,clear
// 4.  LISTS
// 5.  DEQUEUE
// 6.  STACK
// 7.  QUEUE
// 8.  PRIORITY QUEUE
// 9.  MINIMUM HEAP
// 10. SET
// 11. MULTI SET
// 12. UNORDERED SET
// 13. MAPS
// 14. MULTI MAPS
// 15. UNORDERED MAPS