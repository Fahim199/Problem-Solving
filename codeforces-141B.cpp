#include<bits/stdc++.h>

using namespace std;

typedef  long long int ll;




int main(){

    ll a{},x{},y{};

    ll r{};
    cin>>a>>x>>y;
    ll b = (y/a)+1;

    if(y>0 && y%a!=0  && abs(x)<a){
        if(b&1){
            r=b+((b-1)/2);
            if(x<0 && b!=1)r--;
            else if((b==1 && abs(x)>=(a/2.0))||(x==0 &&b!=1)) r=-1;
            cout<<r;
        }else{
            if(abs(x)>=(a/2.0)) cout<<-1;
            else{
                r=b+(b/2)-1;
                cout<<r;
            }

        }

    }else cout<<-1;





    return 0;
}
