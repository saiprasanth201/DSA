// Number hashing:

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     //precompute:
//     int hash[13] = {0};
//     for (int i = 0; i < n; i++) {
//         hash[arr[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     while (q--) {
//         int number;
//         cin >> number;
//         // fetching:
//         cout << hash[number] << endl;
//     }
//     return 0;
// }


//Character hashing:

//when the string contains only lowercase characters:

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     string s;
//     cin >> s;

//     //precompute:
//     int hash[26] = {0};
//     for (int i = 0; i < s.size(); i++) {
//         hash[s[i] - 'a']++;
//     }

//     int q;
//     cin >> q;
//     while (q--) {
//         char c;
//         cin >> c;
//         // fetch:
//         cout << hash[c - 'a'] << endl;
//     }
//     return 0;
// }

//when string contains both upper case and lower case:

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     string s;
//     cin >> s;

//     int hash[256] = {0};
//     for(int i = 0; i < s.size(); i++){
//         hash[s[i]]++;
//     }

//     int q;
//     cin >> q;
//     while(q--){
//         char c;
//         cin >> c;
//         cout << hash[c] << endl;
//     }
//     return 0;
// }


// number hashing using maps/unordered maps:

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     //precompute:
//     map<int, int> mp;
//     for (int i = 0; i < n; i++) {
//         mp[arr[i]]++;
//     }

//     // iterate over the map:
//     /* for(auto it : mp){
//             cout << it.first << "->" << it.second << endl;
//         }
//     */

//     int q;
//     cin >> q;
//     while (q--) {
//         int number;
//         cin >> number;
//         // fetch:
//         cout << mp[number] << endl;
//     }
//     return 0;
// }


//Hashing Methods 

//-> Division Method  -> O(N) in worst case !
//-> Folding Method
//-> Mid square Method





