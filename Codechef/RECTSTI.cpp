//Problem link: https://www.codechef.com/COOK140C/problems/RECSTI
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{};
    cin>>t;
    int n,stick;
    for(int i{0};i<t;i++){
        cin>>n;
        map<int,int>sticks;
        for(int i{0};i<n;i++){
            cin>>stick;
            sticks[stick]++;
        }
        int additional=0;
        for(auto &c: sticks){
            if(c.second &1)additional++;
        }
        int ans=(additional+n)%4 +additional;
        cout<<ans<<endl;
    }
	return 0;
}
