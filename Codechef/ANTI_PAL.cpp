//Problem link : https://www.codechef.com/START24B/problems/ANTI_PAL


#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    ll t,f,m;
    cin>>t;
    string x,z;

    for(ll i{0};i< t;i++){
        map<char,ll>g;
        cin>>f>>x;
        ll y=f/2;
        if(f&1){
            cout<<"NO"<<endl;
            continue;
        }
        int flag=0;
        for(auto c: x){
            g[c]++;
            if(g[c]>y){
            cout<<"NO"<<endl;
            flag=1;
            break;
            }
        }
        if(flag)continue;
        string s;
        cout<<"YES"<<endl;

        for(auto &c:g){
            char h=c.first;
            for(int xx{0};xx<c.second;xx++)s+=h;
        }
        for(int xx{f-1};xx>=y;xx--)cout<<s[xx];
        for(int xx{0};xx<y;xx++)cout<<s[xx];


        cout<<endl;
    }



    return 0;
}
