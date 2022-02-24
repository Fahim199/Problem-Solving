//Problem link: https://codeforces.com/contest/1637/problem/A
#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    ll n{},m{};
    ll prev=0;
    for(ll i{0};i<t;i++){
        cin>>n;
        ll flag=0;prev=0;
        for(ll j{0};j<n;j++){
            cin>>m;
            if(prev<=m && flag==0)prev=m;
            else if(flag ==0 && prev>m)flag=1;
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
