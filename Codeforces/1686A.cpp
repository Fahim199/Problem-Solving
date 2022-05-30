//Problem link: https://codeforces.com/contest/1686/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,curr;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        vector <int> nums;
        int sum=0;
        for(int j=0; j<n ; j++){
            cin>>curr;
            sum+=curr;
            nums.push_back(curr);
        }
        int flag=0;
        int newnum;
        int rem;
        for(int j=0; j<n ; j++){
            rem=sum-nums[j];
            newnum=rem/(n-1);
            if(((newnum*(n-1))==rem) && newnum==nums[j]){
                flag=1;
                break;
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


}

