// SORTING TECHNIQUES:

//1) SELECTION SORT:  [O(n^2)]-> Time complexity

// #include<bits/stdc++.h>
// using namespace std;
// void selection_sort(int arr[],int n){
//     for(int i=0; i<n-1;i++){
//         int  mini=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[mini]){
//                 mini = j;
//             }
//         }
//         if(mini!=i){
//             int temp = arr[mini];
//             arr[mini]= arr[i];
//             arr[i]=temp;
//         }
//     }
// }
// int main(){
//     int n; 
//     cin >> n;
//     int arr[n];
//     for(int i =0;i<n;i++){
//          cin >> arr[i];
//     }
//      selection_sort(arr,n);

//     for(int i=0;i<n;i++){
//             cout << arr[i]<<" ";
//         }
//  return 0;
// }


//2) BUBBLE SORT: