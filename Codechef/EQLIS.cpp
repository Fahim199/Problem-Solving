#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll n{},a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==2){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        if(a==1){
            cout<<a<<endl;
            continue;
        }
        ll x=a/2;
        if(!(a&1)){
            for(int j=x; j>0;j--){
                cout<<j<<" ";
            }
            for(int j=x+1; j<a-1;j++){
                cout<<j<<" ";
            }
            cout<<a<<" "<<a-1;


        }else{
            for(int j{1};j<=x;j++){
                cout<<j<<" ";
            }
            for(int j{a};j>x;j--){
                cout<<j<<" ";
            }
        }

        cout<<endl;
    }
    return 0;
}
