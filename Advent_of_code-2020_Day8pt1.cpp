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
    vector<string> tokens;
    ifstream MyReadFile("t.txt");
    while (getline (MyReadFile, a)){
        tokens.push_back(a);
    }
    int cnt=0;
    vector<int> vec;
    int i=0;
    string token;
    while(true){
        if(find(vec.begin(), vec.end(),i) != vec.end())break;
        vec.push_back(i);
        int insid=0;
        char op;
        int num;
        for(auto c: tokens[i]){
            if(insid==1)token+=c;
            if(c=='+'||c=='-'){
                op=c;
                insid=1;
            }
        }
        num=stoi(token);
        if(tokens[i][0]=='n')i++;
        else if(tokens[i][0]=='a'){
            i++;
            if(op=='+')cnt+=num;
            else cnt-=num;
        }else{
            if(op=='+')i+=num;
            else i-=num;
        }
        token.clear();
    }
    cout<<cnt;

    MyReadFile.close();
    return 0;
}
