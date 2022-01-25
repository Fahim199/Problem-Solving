// Problem link:
// https://www.codechef.com/COOK137C/problems/MASKPOL

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll n{},a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if((a-b)<b)cout<<a-b<<endl;
        else cout<<b<<endl;
    }

    return 0;
}
