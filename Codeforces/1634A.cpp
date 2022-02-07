//Problem link :


#include <bits/stdc++.h>
typedef  long long int ll;
using namespace std;

int main()
{
    ll t,n,k;
    cin>>t;
    string s,r;
    for(ll i{0};i< t;i++){
        cin>>n>>k;
        cin>>s;
        r=s;
        reverse(s.begin(),s.end());
        if(r!=s && k>0){
            cout<<2<<endl;
        }else cout<<1<<endl;

    }

    return 0;
}
