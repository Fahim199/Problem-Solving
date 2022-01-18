#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main(){
    ll n{};
    cin>>n;
    string a;
    int b,c,x;
    string d,e;
    for(int i=0;i<n;i++){
        cin>>a;
        x=a.length();
        b = (a[0]-'0')+(a[1]-'0');
        e=to_string(b)+ a.substr(2,x-2);

        for(int j{x-2};j>=0;j--){
            c=(a[j]-'0')+(a[j+1]-'0');
            if(c>9){
                if(j+2<x){
                    d= a.substr(0,j)+to_string(c)+ a.substr(j+2,x-j-2);
                }else{
                    d=a.substr(0,j)+to_string(c);
                }
                break;

            }
        }
        if(d.length()==0) cout<<e<<endl;
        else cout<<d<<endl;



        d.clear();e.clear();




    }



    return 0;
}
