#include <cctype>
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <cstdlib>
#include <cmath>
#include <tuple>
#include <unordered_set>

using namespace std;
typedef long long int ll;

int main(){
    ll n{};
    ll a{};
    cin>>n;

    ll f{};
    ll largest{};

    for(int i=0;i< n;i++){
            cin>>a;
            largest=0;
        for (int j=1;j<=a;j++){
            cin>>f;

            if((f-j)>0){
                if((f-j)>largest)largest=f-j;
            }
        }
        cout<<largest<<" ";
    }


}
