#include<bits/stdc++.h>

using namespace std;
typedef  long long int ll;

int main(){

    int a{},b{};
    cin>>a>>b;

    ll ma{0};

    if(a&1){
        ma=((a+1)/2)*((a+1)/2) +((a-1)/2)*((a-1)/2);
    }else{
        ma=(a/2)*a;
    }

    if(ma>=b){
        cout<<"YES"<<endl;
        int p=0;
        for(int i{0};i<a;i++){
            for(int j{0}; j<a;j++){
                if(p==0 && (j&1)==0 && b>0){
                    cout<<'L';
                    b--;
                }else if(p==1 && (j&1)==1 && b>0){
                    cout<<'L';
                    b--;
                }else{
                    cout<<'S';
                }
            }
            if(p==0)p=1;
            else p=0;
            cout<<endl;
        }
    }else{
        cout<<"NO";
    }
    return 0;
}
