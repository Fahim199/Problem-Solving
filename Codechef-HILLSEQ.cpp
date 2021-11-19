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
    ll t{};
    cin>>t;




    for(int i=0;i<t;i++){
        cin>>n;
        vector<ll>a;
        vector<ll>b;
        map<ll,ll> counter;
        ll cnt{0};
        for (int j=0;j<n;j++){
            ll num{};
            cin>>num;
            if(cnt==-1)continue;
            if(counter.find(num)!=counter.end()){
                counter[num]++;
                if(counter[num]>2)cnt=-1;
                b.push_back(num);


            }else{
                a.push_back(num);
                counter[num]=1;
            }

        }
        if(cnt==-1||counter[(*max_element(a.begin(),a.end()))]>1)cout<<-1;
        else{
            if(b.size()>1)sort(b.begin(),b.end());
            sort(a.rbegin(),a.rend());
            for(int i{0};i<b.size();i++)cout<<b[i]<<" ";
            for(int i{0};i<a.size();i++)cout<<a[i]<<" ";
        }

        cout<<endl;

    }


}
