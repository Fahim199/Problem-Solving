//Problem link :https://codeforces.com/contest/1634/problem/C


#include <bits/stdc++.h>
typedef  long long int ll;
using namespace std;

int main()
{
    ll t,n,k;
    cin>>t;

    for(ll i{0};i< t;i++){
        cin>>n>>k;
        if((n&1) && k>1)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            if(n==1){
                for(int j{1};j<=k;j++)cout<<j<<" ";
                cout<<endl;
                continue;
            }
            ll oddst=1;
            ll evenst=2;
            while(true){
                if(oddst>(n*k))break;
                for(int j{0};j<k;j++){
                    cout<<oddst<<" ";
                    oddst+=2;
                }
                cout<<endl;
            }

            while(true){
                if(evenst>(n*k))break;
                for(int j{0};j<k;j++){
                    cout<<evenst<<" ";
                    evenst+=2;
                }
                cout<<endl;
            }
        }
    }

    return 0;
}
