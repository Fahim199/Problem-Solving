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
vector<string> tokens;

int getLast(int i,int cnt,vector<int>vec){
    string token;
    while(true){
        if(i==tokens.size())return cnt;
        if(find(vec.begin(), vec.end(),i) != vec.end()|| i>tokens.size()||i<0)return 0;
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
}

int main(){
    string a;
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
        int n=0;
        if(tokens[i][0]=='n'){
            if(num!=0){
               if(op=='+')n=getLast(i+num,cnt,vec);
                else n=getLast(i-num,cnt,vec);
                if(n!=0){
                    cnt=n;
                    break;
                }
            }
            i++;
        }
        else if(tokens[i][0]=='a'){
            i++;
            if(op=='+')cnt+=num;
            else cnt-=num;
        }else{
            n=getLast(i+1,cnt,vec);
            if(n!=0){
                cnt=n;
                break;
            }
            if(op=='+')i+=num;
            else i-=num;

        }
        token.clear();
    }
    cout<<cnt;

    MyReadFile.close();
    return 0;
}
