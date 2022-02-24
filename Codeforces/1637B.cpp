//Problem link: https://codeforces.com/contest/1637/problem/B

#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

void subsetsUtil(vector<int>& A, vector<vector<int> >& res,vector<int>& subset, int index,vector<int>&rec){
    res.push_back(subset);
    for (int i = index; i < A.size(); i++) {
        if(subset.size()==0||rec.back()==i-1){
            rec.push_back(i);
            subset.push_back(A[i]);
            subsetsUtil(A, res, subset, i+1,rec);
            subset.pop_back();
            rec.pop_back();
        }

    }
    return;
}
vector<vector<int> > subsets(vector<int>& A){
    vector<int> subset;
    vector<int>rec;
    vector<vector<int> > res;
    int index = 0;
    subsetsUtil(A, res, subset, index,rec);

    return res;
}

int main()
{
    ll t;
    cin>>t;
    ll n{},m{};
    ll prev=0;
    for(ll i{0};i<t;i++){
        cin>>n;
        vector<int>arrayy(n);
        for(ll j{0};j<n;j++){
            cin>>arrayy[j];

        }
        vector<vector<int> > res = subsets(arrayy);
        ll cnt=0;
        ll flag;
        for (int i = 0; i < res.size(); i++) {
            flag=0;
            if(res[i].size()>0){
                cnt+=res[i].size();
                for (int j = 0; j < res[i].size(); j++){
                    if(res[i][j]==0){
                        flag++;
                    }
                }
                cnt+=flag;
            }

        }
        cout<<cnt<<endl;
    }



    return 0;
}
