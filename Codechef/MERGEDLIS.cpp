// Problem link:
// https://www.codechef.com/COOK137C/problems/MERGEDLIS

#include <bits/stdc++.h>
using namespace std;
typedef  long long int ll;
ll lis(vector<ll> const& a) {
    ll n = a.size();
    const ll INF = 1e9 + 5;
    vector<ll> d(n+1, INF);
    d[0] = -INF;

    for (ll i = 0; i < n; i++) {
        ll j = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
        if (d[j-1] <= a[i] && a[i] <= d[j])
            d[j] = a[i];
    }

    ll ans = 0;
    for (int i = 0; i <= n; i++) {
        if (d[i] < INF)
            ans = i;
    }
    return ans;
}
int main(){
    ll n{},a,b,e,f;
    cin>>n;
    vector<ll>c;
    vector<ll>d;


    for(int i=0;i<n;i++){
        cin>>a>>b;
        vector<ll>c(a);
        vector<ll>d(b);
        for(int j{0};j<a;j++){
            cin>>c[j];
        }
        for(int j{0};j<b;j++){
            cin>>d[j];
        }


        cout<<lis(c)+lis(d)<<endl;


    }
    return 0;
}
