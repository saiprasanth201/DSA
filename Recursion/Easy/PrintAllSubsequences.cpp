#include<bits/stdc++.h>
using namespace std;

void printSubsequences(int ind,vector<int>&ds,int arr[],int n ){
    if(ind >= n){
        for(auto it:ds){
            cout << it <<" ";
        }
        if(ds.size()==0){
            cout << "{}";
        }
        cout << endl;
        return;
    }
    ds.push_back(arr[ind]);
    printSubsequences(ind+1,ds,arr,n);
    ds.pop_back();
    printSubsequences(ind+1,ds,arr,n);
}
int main(){
    int arr[]= {4,2,1};
    int n = 3;
    vector<int> ds;
    printSubsequences(0,ds,arr,n);
    return 0;
}

//TC : O(2^n * N) 2^n for number of subsequences and N for printing each subsequence.
//SC : O(N) for recursion stack space and O(N) for ds vector.