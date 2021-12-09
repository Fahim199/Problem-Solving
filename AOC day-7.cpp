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

vector<ll> tokens;

void tokenGetter(string a){
    string token;
    for(int i=0;i<a.length();i++){
        if(a[i] !=',')token+=a[i];
        if(a[i]==',' || i==(a.length()-1)){
            if(!token.empty())tokens.push_back(stoi(token));
            token.clear();
        }
    }
}

int main(){
    string a;
    ifstream MyReadFile("t.txt");
    map<string,int> b;

    while (getline (MyReadFile, a)){
        tokenGetter(a);
    }
    int n=0;
    vector<ll>vec;
    for(int i{1};i<1000;i++){
        vec.push_back(i);
    }
    vector<ll>d;
    ll cnt=0;
    for(int i{0};i<vec.size();i++){
        cnt=0;
        for(int j{0};j<tokens.size();j++){
            n=abs(tokens[j]-vec[i]);
            cnt+=((n*(n+1))/2);
        }
        d.push_back(cnt);
    }
    cout<<*min_element(d.begin(),d.end());







    MyReadFile.close();
    return 0;
}
