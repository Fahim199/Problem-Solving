//Problem link:https://codeforces.com/contest/1638/problem/A
#include <bits/stdc++.h>
typedef long long int ll;
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
        ll beg=-1; ll ending=n-1; ll rec=1;
        ll ins=0;
        for(ll j{1};j<=n;j++){
            if(j!= arrayy[j-1] && ins==0){
                beg=j-1;
                ins=1;
            }else if(arrayy[j-1]==rec && ins==1){
                ending=j-1;
                break;
            }else if(arrayy[j-1]==rec)rec++;

        }


        if(beg!=-1 || ending!=n-1){
            ending++;
            reverse(arrayy.begin()+beg,arrayy.begin()+ending);
        }
        for(auto c:arrayy)cout<<c<<" ";
        cout<<endl;


    }
    return 0;
}
