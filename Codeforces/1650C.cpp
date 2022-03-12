//Problem link: https://codeforces.com/contest/1650/problem/C

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int t{};
    ll n,m;
    cin>>t;
    string spac;
    for(int i{0};i<t;i++){
        getline(cin,spac);
        cin>>n>>m;
        map<ll,vector<ll>> ans;
        ll a,b;
        vector<ll>vec;
        for(int j{1};j<=m;j++){
            cin>>a>>b;
            vec.push_back(b);
            ans[a].push_back(j);
            ans[a].push_back(b);
        }
        sort(vec.begin(),vec.end());

        vector<ll> an;
        ll rem=m- (n*2);
        ll mini= vec[m-rem-1];
        ll rmini=0;
        ll sum=0;
        vector<ll>addi;
        for(ll j{n*2};j<m;j++){
            if(vec[j]==mini)rmini++;
        }

        for(auto &cc:ans){
            vector<ll>xy=cc.second;
            if(rem>0 && (xy[1]>mini || (rmini>0 && xy[1]==mini  ))){
                rem--;
                if(xy[1]==mini)rmini--;
            }else{
                an.push_back(xy[0]);
                sum+=xy[1];
            }
        }

        int ss=an.size();
        cout<<sum<<endl;
        for(int j{0};j<n;j++){
            cout<<an[j]<<" "<<an[ss-1-j]<<endl;
        }
    }

	return 0;
}
