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

vector<char> tokens;

void tokenGetter(string a){
    for(int i=0;i<a.length();i++){
        char c=a[i];
        tokens.push_back(c);
    }
}

int main(){
    string a;
    ifstream MyReadFile("t.txt");
    int cnt =0;
    while (getline (MyReadFile, a)){
        if(a.empty()){
            sort( tokens.begin(), tokens.end() );
            tokens.erase( unique( tokens.begin(), tokens.end() ), tokens.end() );
            cnt+= tokens.size();
            tokens.clear();
        }else tokenGetter(a);
    }
    if(!tokens.empty()){
        sort( tokens.begin(), tokens.end() );
        tokens.erase( unique( tokens.begin(), tokens.end() ), tokens.end() );
        cnt+= tokens.size();
    }
    cout<<cnt;
    MyReadFile.close();
    return 0;
}
