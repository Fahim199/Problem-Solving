//Problem link: https://www.codechef.com/COOK140C/problems/DIGARR/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{},n{};
    cin>>t;
    string m;
    for(int i{0};i<t;i++){
        cin>>n>>m;
        int flag=0;
        for(auto c: m){
            if(c=='0'|| c=='5'){
                flag=1;
                break;
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}
