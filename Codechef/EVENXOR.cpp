#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int cntstBits(int x){
        int cnt=0;
        while(x){
            cnt+=x&1;
            x>>=1;
        }
        return cnt;
    }
int main(){
    ll n{},a,b,c;
    cin>>n;
    vector <int>vec;
    a=1000;
    b=3;
    vec.push_back(3);
    while(a){
        b++;
        if(!(cntstBits(b)&1)){
            vec.push_back(b);
            a--;
        }
    }
    for(int i=0;i<n;i++){
        cin>>c;
        for(int j=0;j<c;j++){
            cout<<vec[j]<<" ";
        }
        cout<<endl;

    }
    return 0;
}
