//Problem link : https://codeforces.com/contest/1633/problem/B


#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    int t;
    cin>>t;
    string n;
    for(int i{0};i< t;i++){

        cin>>n;
        int s=n.size();
        ll a,b;
        a=0,b=0;
        for(auto c: n){
            if(c=='0')a++;
            else b++;
        }
        if(a<b)cout<<a;
        else if(b<a)cout<<b;
        else cout<<b-1;
        cout<<endl;

    }


    return 0;
}
