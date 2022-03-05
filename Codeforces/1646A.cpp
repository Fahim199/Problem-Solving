//Problem link:  https://codeforces.com/contest/1646/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll N;
	cin >> N;
    ll u, v;
	for(int i = 0;i<N;i++) {
	    cin >> u >> v;
	    cout<<v/(u*u)<<endl;
	}
	return 0;
}
