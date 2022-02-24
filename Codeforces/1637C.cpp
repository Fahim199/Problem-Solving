//Problem link: https://codeforces.com/contest/1637/problem/C
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    ll n{},num{};
    for(ll i{0};i<t;i++){
        cin>>n;
        ll flag=0;
        for(ll j{0};j<n;j++){
            cin>>num;
            if(j!=0 && j!=(n-1)){
                if(!(num&1) || (num>1 && n>3))flag= 1;
                cnt+=(num/2);
                if(num&1)cnt++;
            }
        }
        if(flag)cout<<cnt<<endl;
        else cout<<-1<<endl;

    }
    return 0;
}
