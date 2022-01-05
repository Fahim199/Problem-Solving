#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long int ll;

int main(){
    ll b=0;
    vector<ll>x;
    ll s=1;
    while(true){
        b=s*s;
        if(b>=1000000000)break;
        if((b*s)<=1000000000)x.push_back(b*s);
        x.push_back(b);
        s++;
    }
    sort( x.begin(), x.end() );
    x.erase( unique( x.begin(), x.end() ), x.end() );
    int n;int a;
    cin>>n;
    int xx=x.size();
    for(int i{0};i<n;i++){
        cin>>a;
        for(int j{0};j<xx;j++){
            if(a>x[(xx/2)]){
                if(a>=x[xx-1-j]){
                    cout<<xx-j;
                    break;
                }
            }else{
                if(a<x[j]){
                    cout<<j;
                    break;
                }
            }

        }
        cout<<endl;
    }


    return 0;
}
