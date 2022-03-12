//Problem link: https://codeforces.com/contest/1650/problem/B

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int n{};
    ll a,b,c;
    cin>>n;
    for(int i{0};i<n;i++){
        cin>>a>>b>>c;
        ll maxi,cmaxi;
        cmaxi=0;
        maxi=b/c + b%c;
        ll numm=((b/c)*c)-1;
        if(numm>=a){
            cmaxi=numm/c + numm%c;
        }

        cout<<max(maxi,cmaxi)<<endl;
    }

	return 0;
}
