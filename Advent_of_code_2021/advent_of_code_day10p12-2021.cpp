#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<string> tokens;
map <char,char> translat={{'(',')'},{'{','}'},{'[',']'},{'<','>'}};
map<char,int> price ={{')',3},{']',57},{'}',1197},{'>',25137}};
map<char,int> price2 ={{'(',1},{'[',2},{'{',3},{'<',4}};
ll cost=0;
vector<ll>tcost;
vector<char>ans;
vector<char>rec;
int main(){
    string a;
    ifstream MyReadFile("t.txt");
    int in;
    char c;
    while (getline (MyReadFile, a)){
        in=0;
        for(int i{0};i<a.length();i++){
            c=a[i];
            if(c=='('||c=='['||c=='{'||c=='<'){
                rec.push_back(c);
            }else{
                if(translat[rec.back()]==c) rec.pop_back();
                else{
                    ans.push_back(c);
                    in=1;
                    break;
                }
            }
        }
        cost=0;
        if(in==0){
            reverse(rec.begin(),rec.end());
            for(auto x:rec) cost =cost*5 + price2[x];
            tcost.push_back(cost);
        }
        rec.clear();
    }
    int tprice=0;
    for(auto x:ans) tprice+= price[x];
    sort(tcost.begin(),tcost.end());
    cout<<tprice<<endl;
    cout<<tcost[tcost.size()/2];
    MyReadFile.close();
    return 0;
}
