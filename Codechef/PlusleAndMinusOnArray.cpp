//Problem link: https://www.codechef.com/START29B/problems/PMA

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int t{},n{};
    cin>>t;
    for(int i{0};i<t;i++){
        cin>>n;
        ll sum=0;
        ll cc;
        ll maxi,mini;
        for(int j{0};j<n;j++){
            cin>>cc;
            cc=abs(cc);
            if(j&1){
                sum-=cc;
                if(j!=1)maxi=max(maxi,cc);
                else maxi=cc;
            }else{
                sum+=cc;
                if(j!=0)mini=min(mini,cc);
                else mini=cc;
            }
        }
        if(maxi>mini) sum=sum+2*(maxi-mini);
        cout<<sum<<endl;
    }

	return 0;
}
