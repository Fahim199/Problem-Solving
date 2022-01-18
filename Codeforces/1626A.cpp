#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main(){
    ll n{};
    cin>>n;
    string a;
    map<char, int> b;
    string e,g;

    for(int i=0;i<n;i++){
        cin>>a;
        for(auto c: a){
            b[c]++;
        }
        for(auto &c:b){
            if(c.second == 2){
                e=e+c.first+c.first;
            }else{
                for(int j=0;j<c.second;j++){
                    g=g+c.first;
                }
            }

        }
        e=e+g;
        cout<<e<<endl;
        e.clear();
        g.clear();
        b.clear();

    }



    return 0;
}
