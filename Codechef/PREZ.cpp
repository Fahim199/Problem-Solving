//Problem link : https://www.codechef.com/LTIME104B/problems/PREZ


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,k,dig,cnt,rem;
    string num;
    for(int i{0};i< t;i++){

        cin>>n>>k;
        cin>>num;
        cnt=0;
        for(auto c:num){
            dig=c-'0';
            if(k==0){
                if(dig==0){
                    cnt++;
                    continue;
                }else break;
            }
            if(dig==0)rem=k-k%10;
            else rem=k-(k%10 - 10+dig);
            if(rem>k)rem-=10;
            if(rem>=0){
                k=rem;
                cnt++;

            }else break;
        }
        cout<<cnt<<endl;


    }


    return 0;
}
