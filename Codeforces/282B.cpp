//Problem link : https://codeforces.com/contest/282/problem/B


#include <bits/stdc++.h>
typedef  long long int ll;
using namespace std;

int main()
{
    ll t,n,k;
    ll a=0,b=0;
    cin>>t;
    vector<int>first(t);
    for(ll i{0};i< t;i++){
        cin>>n>>k;
        first[i]=n;
        a+=n;
        b+=k;
    }
    int flag=0;
    int cnt=0;
    if(a>b){
        b=0;
        for(ll i{0};i< t;i++){
            a-=first[i];
            b+=(1000-first[i]);
            cout<<"G";
            cnt++;
            if(abs(a-b)<=500){
                flag=1;
                break;
            }
        }if(!flag)cout<<-1;
        else{
            for(ll i{cnt};i< t;i++){
                cout<<"A";
            }
        }

    }else{
        a=0;
        for(ll i{0};i< t;i++){
            a+=first[i];
            b-=(1000-first[i]);
            cout<<"A";
            cnt++;
            if(abs(a-b)<=500){
                flag=1;
                break;
            }
        }
        if(!flag)cout<<-1;
        else{
            for(ll i{cnt};i< t;i++){
                cout<<"G";
            }
        }

    }



    return 0;
}
