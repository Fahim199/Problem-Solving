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
    ll x{},y{},a{},b{},k{};
    ll petrol{},diesel{};
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>a>>b>>k;
        petrol= x+ a*k;
        diesel= y+ b*k;
        if(diesel<petrol) cout<<"DIESEL";
        else if(petrol<diesel) cout<<"PETROL";
        else cout<<"SAME PRICE";
        cout<<endl;
    }
}
