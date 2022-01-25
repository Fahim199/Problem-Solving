// Problem link:
// https://www.codechef.com/COOK137C/problems/NOPAL

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int n{},a,b;
    string d= "abcdefghijklmnopqrstuvwxyz";

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        for(int j{0};j<a;j++){
            b=j%26;
            cout<<d[b];

        }
        cout<<endl;
    }

    return 0;
}
