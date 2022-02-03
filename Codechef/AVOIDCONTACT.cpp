//Problem link : https://www.codechef.com/START24B/problems/AVOIDCONTACT

#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    ll x,y;
    ll total=0;
    for(ll i{0};i< t;i++){
        total=0;
        cin>>x>>y;
        if(y>0) total+=((y*2)-1);
        total+=(x-y);
        if(x!=y && y>0)total++;
        cout<<total<<endl;
    }
    return 0;
}
