//Problem link: https://www.codechef.com/START29B/problems/STRP/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int t{},n{};
    cin>>t;
    string spac;
    for(int i{0};i<t;i++){
        cin>>n>>spac;
        char prev=spac[0];
        int cnt=0;
        int icnt=1;
        for(int j{1};j<n;j++){
            char curr=spac[j];
            if(prev==curr){
                icnt++;
            }else{
                prev=curr;
                if(icnt &1)icnt++;
                cnt+=(icnt/2);
                icnt=1;
            }
        }
        if(icnt &1)icnt++;
        cnt+=(icnt/2);
        cout<<cnt<<endl;
    }

	return 0;
}
