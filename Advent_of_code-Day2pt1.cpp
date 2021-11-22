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
    string a,b,c;
    int cnt=0;
    for(int i=0;i<1000;i++){
        cin>>a>>b>>c;
        string mini,maxi;
        int fir=0;
        for(auto f: a){
            if(f=='-'){
                fir=1;
                continue;
            }
            if(fir==0)mini+=f;
            else maxi+=f;
        }
        int minim= stoi(mini);
        int maxim= stoi(maxi);
        char sear= b[0];
        int incnt=0;
        for(auto f:c){
            if(f==sear)incnt++;
        }
        if(incnt>=minim && incnt<=maxim)cnt++;
    }
    cout<<cnt;
    return 0;
}
