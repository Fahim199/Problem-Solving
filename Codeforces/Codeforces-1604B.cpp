#include <cctype>
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <cstdlib>
#include <cmath>
#include <tuple>
#include <unordered_set>

using namespace std;
typedef long long int ll;

int main(){
    ll n{};
    ll a{};
    cin>>n;
    ll f{};
    ll prev{};
    ll check{};



    for(ll i=0;i<n;i++){

        cin>>a;
        prev=0;
        check=0;

        if(!(a&1))check=1;

        for (ll j=1;j<=a;j++){
            cin>>f;
            if(check==0 && prev>=f) check=1;
            prev=f;
        }

        if(check==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }


}
