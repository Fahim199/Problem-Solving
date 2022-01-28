//Problem link : https://codeforces.com/contest/1631/problem/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x;
    for(int i{0};i< n;i++){

        cin>> x;
        int f;
        vector<int>c(x);
        vector<int>d(x);
        for(int j{0};j<x; j++){
            cin>>c[j];
        }
        for(int j{0};j<x; j++){
            cin>>d[j];
        }
        for(int j{0};j<x; j++){
            if(c[j]>d[j]){
                f=c[j];
                c[j]=d[j];
                d[j]=f;
            }
        }
        cout<<(*max_element(c.begin(),c.end())) * (*max_element(d.begin(),d.end()))<<endl;
    }


    return 0;
}
