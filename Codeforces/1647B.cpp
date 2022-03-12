//Problem link: https://codeforces.com/contest/1647/problem/B

#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main(){
    int t{},n{};
    cin>>t;
    int m{};
    for(int i{0};i<t;i++){
        cin>>n>>m;
        vector<vector<int>>x;
        vector<int>xx(m);
        char cc;
        for(int j{0};j<n;j++){
            for(int k{0};k<m;k++){
                cin>>cc;
                xx[k]=cc-'0';
            }
            x.push_back(xx);
        }
        int flag=0;
        for(int j{1};j<n;j++){
            for(int k{0};k<m;k++){
                if(x[j][k]==1 && x[j-1][k]==1){
                    if(k!=0){
                       if(x[j][k-1]!=x[j-1][k-1])flag=1;
                    }
                    if(k!=(m-1)){
                        if(x[j][k+1]!=x[j-1][k+1])flag=1;
                    }
                }
                if(flag)break;
            }
            if(flag)break;
        }
        if(flag)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;




    }

	return 0;
}
