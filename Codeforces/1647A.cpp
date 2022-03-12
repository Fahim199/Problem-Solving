//Problem link: https://codeforces.com/contest/1647/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

int main(){
    int m{},n{};
    cin>>m;
    for(int i{0};i<m;i++){
        cin>>n;
        int x=n;
        string c,d;
        int cc=0,dd=0;
        int a=0;
        while(n>0){

            if(a&1){
                d+='2';dd+=2;
                c+='1';cc+=1;
                n-=1;
            }else{
                c+='2';cc+=2;
                d+='1';dd+=1;
                n-=2;

            }
            a++;
        }
        if(cc==x)cout<<c<<endl;
        else {
            cout<<d;
            if(dd!=x)cout<<(x-dd);
            cout<<endl;
        }

    }

	return 0;
}
