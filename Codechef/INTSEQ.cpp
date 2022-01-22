#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main(){
    ll n{},a,b,c,cnt;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        b=a;
        cnt=0;
        if(a%2==0){
            c=a/2;
            b=c;
            cnt++;
            while((a-c)%2==0){
                c+=(a-c)/2;
                cnt++;
            }

        }
        cout<<cnt<<endl;

    }
    return 0;
}
