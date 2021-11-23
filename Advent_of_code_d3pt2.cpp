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
    cin>>a;
    int n=a.length();
    ll cnt=0,cnt_first=0,cnt_sec=0,cnt_third=0,cnt_fourth=0;
    for(int i=1;i<323;i++){
        cin>>a;

        int ind= i*3;
        ind=ind%n;
        int ind_first= i%n;
        int ind_sec=(i*5)%n;
        int ind_third=(i*7)%n;
        int ind_fourth=(i/2)%n;
        if(a[ind]=='#')cnt++;
        if(a[ind_first]=='#')cnt_first++;
        if(a[ind_sec]=='#')cnt_sec++;
        if(a[ind_third]=='#')cnt_third++;
        if(a[ind_fourth]=='#' && i%2==0) cnt_fourth++;

    }
    cout<<cnt<<" "<<cnt_first<<" "<<cnt_sec<<" "<<cnt_third<<" "<<cnt_fourth<<" "<<endl;
    cnt=cnt*cnt_first*cnt_sec*cnt_third*cnt_fourth;
    cout<<cnt;
    return 0;
}
