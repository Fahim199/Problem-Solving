//Problem link: https://codeforces.com/contest/1650/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int n{};
    string s;
    char c;
    cin>>n;
    for(int i{0};i<n;i++){
        cin>>s>>c;
        int flag=0;
        for(int j{0};j<s.length();j++){
            if(s[j]==c && !(j&1)){
                flag=1;
                break;
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

	return 0;
}
