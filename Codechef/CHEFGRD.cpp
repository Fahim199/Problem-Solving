#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n{};
    cin>>n;
    ll a{};ll b{};ll c{};
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        a++;
        a/=2;
        if(((b%2==0) && (c%2==0))|| ((b&1) && (c&1))){
            cout<<0;
        }else{
            cout<<1;
        }
        cout<<endl;
    }



    return 0;
}

