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
typedef unsigned long long int ll;

int main(){
    ll n{};
    ll t{};
    cin>>t;

    //For making a palindrome , there can be 1 odd number of characters in the string


    for(int i=0;i<t;i++){
        cin>>n;
        vector<ll>a(n);
        ll cnt{0};
        for (int j=0;j<n;j++){
            cin>>a[j];
            if(a[j]&1) cnt++;
        }
        if(cnt>0)cnt--;
        if(n==1||cnt==0)cout<<0;
        else{
            if(cnt&1)cnt++;                 //odd leftover causes 1 more operation
            cout<<cnt/2;
        }
        cout<<endl;

    }


}
