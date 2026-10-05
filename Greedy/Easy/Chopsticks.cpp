#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long long D;
	cin >> n >> D;
	vector<long long> chop(n);
	for(int i =0;i<n;i++){
	    cin>>chop[i];
	}
	sort(chop.begin(),chop.end());
	int cnt = 0;
	for(int i =0;i<n-1;){
	    if(chop[i+1] - chop[i] <= D){
	        cnt++;
	        i+=2;
	    }else i++;
	}
cout << cnt << endl;
return 0;
}

TC: o(nlongn)
SC: o(n)