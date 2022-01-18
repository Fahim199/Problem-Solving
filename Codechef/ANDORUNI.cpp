#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n{},a{}, b{};
    cin>>n;
    for(int i=0;i<n;i++){
        vector<int>cntSetBit(30);                              //keeps count of bits set
        cin>>a;
        for(int j=0;j<a;j++){
            cin>>b;
            for(int bits{0};bits<30;bits++){
                if((b&(1<<bits))!=0) cntSetBit[bits]++;       //if the bit is set count increases++
            }
        }
        ll ans=0;
        for(int j{0};j<30;j++){
            if(cntSetBit[j]>1) ans|=(1<<j);                   //sets jth bit
        }
        cout<<ans<<endl;
    }

    return 0;
}
