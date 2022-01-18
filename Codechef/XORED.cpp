#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main(){
    ll n{};
    cin>>n;
    ll a,b,laste;

    const ll ulimit= 500000;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        laste=0;
        vector<ll>c(a);
        if(a ==1){
            cout<<b<<endl;
            continue;
        }else{
            for(int j=0;j<a-1;j++){
                c[j]=j;
                laste^=j;
            }
            laste^=b;
            if(laste>=(a-1) && laste<=ulimit) c[a-1]=laste;
            else{
                c[a-1]=laste^(1<<18);
                if((c[0]^(1<<18))==c[a-1]) c[1]^=(1<<18);
                else c[0]^=(1<<18);

            }
        }
        for(auto ans: c){
            cout<<ans<<" ";
        }
        cout<<endl;
    }



    return 0;
}
