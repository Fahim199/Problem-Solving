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
    string a;
    cin>>a;
    int n=a.length();
    ll cnt=0;
    for(int i=1;i<323;i++){
        cin>>a;
        int ind= i*3;
        ind=ind%n;
        if(a[ind]=='#')cnt++;
    }
    cout<<cnt;
    return 0;
}
