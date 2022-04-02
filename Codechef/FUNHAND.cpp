//Problem link : https://www.codechef.com/COOK140C/problems/FUNHAND/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{};
    cin>>t;
    int n,a,b;
    for(int i{0};i<t;i++){
        cin>>n>>a>>b;
        if((abs((a-b))>2)||a==b)
            cout<<0<<endl;
        else{
            if(a==1 || b==1)
                cout<<1<<endl;
            else if(abs((a-b))>1){
                if(n<=a && n<=b)
                    cout<<0<<endl;
                else
                    cout<<1<<endl;
            }else{
                if(n>a && n>b)
                    cout<<2<<endl;
                else if(abs(a-n)>1 && abs(b-n)>1)
                    cout<<0<<endl;
                else cout<<1<<endl;
            }
        }
    }

	return 0;
}
