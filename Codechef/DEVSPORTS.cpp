#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n{};
    cin>>n;
    ll a{};
    ll t{};
    for(int i=0;i<n;i++){
        cin>>t;
        for(int j=0;j<4;j++){
            cin>>a;
            t-=a;
        }
        if(t>=0)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }



    return 0;
}

