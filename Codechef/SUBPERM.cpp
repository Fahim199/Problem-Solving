//Problem link : https://www.codechef.com/LTIME104B/problems/SUBPERM


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,k,diff;
    for(int i{0};i< t;i++){

        cin>>n>>k;
        diff=2;
        if(k==1){
            if(n>1)cout<<-1<<endl;
            else cout<<1<<endl;
        }else{
            if(n-k>0){
                diff=diff+n-k;
            }
            cout<<1<<" ";
            if(diff==2)cout<<2<<" ";
            for(int j{3};j<=n;j++){
                cout<<j<<" ";
                if(j==diff){
                    cout<<2<<" ";
                }



            }
            cout<<endl;
        }

    }


    return 0;
}
