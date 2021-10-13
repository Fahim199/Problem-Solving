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
typedef unsigned long long int ll;

int main(){

    int n{},sx{},sy{},gx{},gy{};
    cin>>n>>sx>>sy>>gx>>gy;
    gx-=sx;
    gy-=sy;
    string f;
    if(gy>=0)f+='N';
    else f+='S';
    if(gx>=0)f+='E';
    else f+='W';

    string g;
    cin>>g;
    int s=0;
    gx=abs(gx);
    gy=abs(gy);

    for(int i=0;i<n;i++){
        if(gx<=0 && gy<=0)break;
        if(g[i]==f[0]||g[i]==f[1]){
            if(g[i]==f[0])gy--;
            else gx--;

        }
        s++;
    }
    if(gx>0 ||gy>0)cout<<-1;
    else cout<<s;

}
