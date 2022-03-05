//Problem link:  https://codeforces.com/contest/1646/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll N;
	cin >> N;
    ll u, v;

	for(int i = 0;i<N;i++) {

	    cin >> u;
	    vector<ll> a(u);
	    for(int j=0;j<u;j++){
            cin>>a[j];
	    }
	    sort(a.begin(),a.end());
	    ll f=u/2;
	    ll sr=0;
	    ll br=a[0];
	    ll h=u-1;
	    for(ll j=1;j<u;j++){
            if(sr>br)break;
            if(j>=h)break;
            br+=a[j];
            sr+=a[h];
            h--;
	    }
	    if(sr>br)cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;


	}


	return 0;
}
