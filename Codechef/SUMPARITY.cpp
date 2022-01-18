#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main(){
    ll n{},a,b;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(b&1){
            if(a&1) cout<<"ODD"<<endl;
            else cout<<"EVEN"<<endl;
        }else{
            if(a>1)cout<<"IMPOSSIBLE"<<endl;
            else cout<<"EVEN"<<endl;
        }
    }



    return 0;
}

