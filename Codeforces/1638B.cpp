//Problem link:https://codeforces.com/contest/1638/problem/B
#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;



int main()
{
    ll t;
    cin>>t;
    ll n{};
    for(ll i{0};i<t;i++){
        cin>>n;
        vector<int>arrayy(n);

        for(ll j{0};j<n;j++){
            cin>>arrayy[j];
        }
        ll odd=-1;ll even=-1;
        int flag=0;
        for(ll j{0};j<n;j++){
            if((arrayy[j]&1)){
                if(odd!=-1){
                    if(odd>arrayy[j]){
                        flag=1;
                        break;
                    }
                }
                odd=arrayy[j];
            }else{
                if(even!=-1){
                    if(even>arrayy[j]){
                        flag=1;
                        break;
                    }
                }
                even=arrayy[j];
            }

        }
        if(flag)cout<<"No"<<endl;
        else  cout<<"Yes"<<endl;


    }



    return 0;
}
