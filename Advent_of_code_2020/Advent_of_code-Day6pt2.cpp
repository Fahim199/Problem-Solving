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
int cnt =0;

vector<char> tokens;

void tokenGetter(string a){
    for(int i=0;i<a.length();i++){
        char c=a[i];
        tokens.push_back(c);
    }
}
void ansGetter(int n){
    sort( tokens.begin(), tokens.end() );
    char h=tokens[0];
    int num=0;
    for(auto c:tokens){
        if(h==c){
            num++;
        }else{
            if(num==n)cnt++;
            h=c;
            num=1;
        }
    }
    if(num==n)cnt++;
    tokens.clear();
}
int main(){
    string a;
    ifstream MyReadFile("t.txt");
    int n=0;
    while (getline (MyReadFile, a)){
        if(a.empty()){
            ansGetter(n);
            n=0;
        }else{
            n++;
            tokenGetter(a);
        }
    }
    //this is for the last lines, as no blank is present
    if(!tokens.empty()){
        ansGetter(n);
    }
    cout<<cnt;
    MyReadFile.close();
    return 0;
}
