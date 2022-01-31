//Problem link : https://codeforces.com/contest/1633/problem/C


#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    ll a,b,c,d,e,f,g;
    for(ll i{0};i< t;i++){

        cin>>a>>b>>c>>d>>e>>f>>g;
        int jitse =0;
        for(ll j{0};j<=e;j++){
            ll ene=(a+g*j)/d;
            if((ene*d)!=(a+g*j))ene++;
            ll cha= c/(b+f*(e-j));
            if((cha*(b+f*(e-j)))!=c)cha++;
            cha--;
            if(ene>cha){
                jitse =1;
                break;
            }
        }
        if(jitse)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }


    return 0;
}
