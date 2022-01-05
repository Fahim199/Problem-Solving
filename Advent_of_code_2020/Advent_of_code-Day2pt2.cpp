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
        minim--;maxim--;
        char sear= b[0];
        int incnt=0;
        if(c[minim]==sear)incnt++;
        if(c[maxim]==sear)incnt++;
        if(incnt==1)cnt++;

    }
    cout<<cnt;
    return 0;
}
