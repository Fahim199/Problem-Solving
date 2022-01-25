// Problem link:
// https://www.codechef.com/COOK137C/problems/MEANMAX/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int n,a,c,m;
    long double d;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        d=0;
        m=0;
        for(int j{0};j<a;j++){
            cin>>c;
            d+=c;
            if(m<c)m=c;

        }
        a--;
        d-=m;
        d/=a;
        d+=m;
        std::cout << std::fixed;
        std::cout << std::setprecision(6);
        cout<<d<<endl;
    }

    return 0;
}
