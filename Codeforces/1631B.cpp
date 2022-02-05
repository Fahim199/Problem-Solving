//Problem link : https://codeforces.com/contest/1631/problem/B


#include <bits/stdc++.h>
typedef  long long int ll;
using namespace std;

int main()
{
    ll t,n;
    cin>>t;
    for(ll i{0};i< t;i++){
        cin>>n;
        vector <ll> inp(n);
        for(int j{0};j<n;j++){
            cin>>inp[j];
        }
        int st=0;
        ll lastNum= inp[n-1];
        ll cnt=0;
        if(n<3){
            if(n==2){
                if(inp[0]!=lastNum)cnt++;
            }
            cout<<cnt<<endl;
            continue;
        }
        reverse(inp.begin(),inp.end());
        int endIndex =2;
        int flag;
        while(true){
            flag=0;
            for(int j{st};j<endIndex;j++){
                if(inp[j]!=lastNum){
                    flag=1;
                    break;
                }
            }
            if(flag)cnt++;
            if(endIndex>=(n))break;
            st=endIndex;
            if((endIndex*2)>(n-1))endIndex=n;
            else{
                while(true){
                    if(inp[st]==lastNum)st++;
                    else break;
                }
                if((st*2)>(n))endIndex=n;
                else endIndex=st*2;
            }

        }
        cout<<cnt<<endl;
    }

    return 0;
}
