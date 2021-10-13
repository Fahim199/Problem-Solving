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

    int n{},k{};
    int x{},y{};
    cin>>n>>k;
    cin>>x>>y;

    double r=0;

    for(int i=0;i<n-1;i++){
        int f,g;
        cin>>f>>g;
        r+=sqrt((x-f)*(x-f)+(y-g)*(y-g));
        x=f;
        y=g;
    }
    r*=k;
    r/=50;
    cout<<fixed;
    cout<<setprecision(9)<<r;


}
