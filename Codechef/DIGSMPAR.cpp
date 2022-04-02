//Problem link: https://www.codechef.com/COOK140C/problems/DIGSMPAR/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{},n{};
    cin>>t;
    string m;
    for(int i{0};i<t;i++){
        cin>>n;
        int s=0;
        int x=0;
        m=to_string(n);
        if(m.back()=='9'){
            for(auto c: m){
                s+= (c-'0');
            }
            n++;
            m=to_string(n);
            for(auto c: m){
                x+= (c-'0');
            }
            if(((s&1)&& (x&1))||(!(s&1)&& !(x&1))) cout<<n+1<<endl;
            else cout<<n<<endl;
        }else
            cout<<n+1<<endl;
    }
	return 0;
}
