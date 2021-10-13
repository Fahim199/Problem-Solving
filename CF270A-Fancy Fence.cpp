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
typedef unsigned long long int ll;

int main(){

    int n{};
    cin>>n;
    int a{};
    for(int i=0;i<n;i++){
        cin>>a;
        if(360%(180-a)==0)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }


}
