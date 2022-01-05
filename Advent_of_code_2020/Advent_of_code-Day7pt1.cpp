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

vector<string> tokens;

void tokenGetter(string a){
    string token;
    for(int i=0;i<a.length();i++){
        if(a[i] !=' ')token+=a[i];
        if(a[i]==' ' || i==(a.length()-1)){
            if(!token.empty())tokens.push_back(token);
            token.clear();
        }
    }
}

int main(){
    string a;
    map<string, vector<string> > bags;
    ifstream MyReadFile("t.txt");
    while (getline (MyReadFile, a)){
        tokenGetter(a);
        string bag=tokens[0]+tokens[1];
        for(int i=2;i<tokens.size();i++){
            if(isdigit(tokens[i][0])){
                string nextBag=tokens[i+1]+tokens[i+2];
                bags[nextBag].push_back(bag);
                nextBag.clear();
            }
        }
        bag.clear();
        tokens.clear();
    }
    vector <string> f;
    for(auto c: bags["shinygold"]){
        f.push_back(c);
    }
    vector<string>check;
    check=f;
    f.clear();
    vector <string>l;
    while(!check.empty()){
        f.push_back(check[check.size()-1]);
        if(bags.find(check[check.size()-1])!=bags.end()){
            l=bags[check[check.size()-1]];
            check.pop_back();
            check.insert(check.end(),l.begin(),l.end());
        }else{
            check.pop_back();
        }
    }


    sort( f.begin(), f.end() );
    f.erase( unique( f.begin(), f.end() ), f.end() );
    cout<<f.size();
}
