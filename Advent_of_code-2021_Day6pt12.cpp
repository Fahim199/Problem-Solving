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

vector<int> tokens;

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
    while (getline (MyReadFile, a)) tokenGetter(a);
    deque<ll>b;
    for(int i{0};i<9;i++)b.push_back(0);
    for(auto c:tokens){
        b[c]++;
    }
    ll cnt=0;
    ll c;
    for(int i{0};i<256;i++){
        if(i==80){
           for(auto c:b)cnt+=c;
           cout<<cnt<<endl;
        }
        c=b[0];
        b.pop_front();
        b.push_back(c);
        b[6]+= c;

    }
    cnt=0;
    for(auto c:b)cnt+=c;
    cout<<cnt;
    MyReadFile.close();
    return 0;
}
