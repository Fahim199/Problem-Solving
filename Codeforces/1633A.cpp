//Problem link : https://codeforces.com/contest/1633/problem/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string n;
    vector<int>b{0,1,2,3,4,5,6,7,8,9};
    for(int i{0};i< t;i++){

        cin>>n;
        int s=n.size();
        int st;
        if(s!=1)st=0;
        else st=1;
        for(int j{st};j<10;j++){
            if(stoi(n)%7 ==0) break;
            n[s-1]='0'+j;
        }
        cout<<n<<endl;

    }


    return 0;
}
