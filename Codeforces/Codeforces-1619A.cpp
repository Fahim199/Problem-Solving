#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long int ll;

int main(){
    int n;
    cin>>n;
    int b;
    string a;
    for(int i{0};i<n;i++){
        cin>>a;
        if(a.length()&1){
            cout<<"NO";
        }else{
            b=a.length()/2;
            if(a.substr(0,b)==a.substr(b,b))cout<<"YES";
            else cout<<"NO";
        }
        cout<<endl;
    }


    return 0;
}
