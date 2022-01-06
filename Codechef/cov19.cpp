#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n{};
    cin>>n;
    ll a{};
    ll t{};
    for(int i=0;i<n;i++){
        cin>>t>>a;
        if(a&1)a++;
        a/=2;
        if(t&1)t++;
        t/=2;
        cout<<a*t<<endl;
    }



    return 0;
}
