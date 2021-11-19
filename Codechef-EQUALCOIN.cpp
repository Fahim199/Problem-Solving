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
    cin>>n;
    ll x{},y{};
    ll sum{};
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        sum=x+y*2;
        if(sum&1)cout<<"NO";
        else{
            if(x>0||y>0&&(y&1)==0)cout<<"YES";
            else cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}
