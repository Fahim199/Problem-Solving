#include <bits/stdc++.h>
using namespace std;
int r; int c;
vector<int>ans;
vector<string> tokens;
vector<int>di{1,0,-1,0};
vector<int>dj{0,1,0,-1};
int isValid(int i, int j,vector<vector<int>>&vis){
    vector<int>aa{i,j};
    if(i<0|| j<0 || i>=c || j>=r ||tokens[i][j]=='9'||find(vis.begin(),vis.end(),aa)!=vis.end())return 0;
    return 1;
}
bool small(int i,int j){
    for(int x{0};x<4;x++){
        int xx=i+di[x];int yy=j+dj[x];
        if(xx<0||yy<0||xx>=c||yy>=r) continue;
        if(tokens[i][j]>=tokens[xx][yy])return false;
    }
    return true;
}
int main(){
    string a;
    ifstream MyReadFile("t.txt");
    vector <int> ax; vector<int>why;
    while (getline (MyReadFile, a))tokens.push_back(a);
    int cnt=0;
    r=tokens[0].size();
    c=tokens.size();
    for(int i{0};i<c;i++){
        for(int j{0};j<r;j++){
            if(small(i,j)){
                int num=tokens[i][j]-'0';
                cnt+=num;
                ax.push_back(i);
                why.push_back(j);
            }
        }
    }
    deque<vector<int>> compute;
    vector<int>co;
    vector<vector<int>>vis;
    for(int i{0};i<ax.size();i++){
        co.push_back(ax[i]);co.push_back(why[i]);
        compute.push_back(co);
        vis.push_back(co);
        co.clear();
        int xxx;int yyy;
        while(true){
            if(compute.empty())break;
            xxx=compute[0][0];yyy=compute[0][1];
            compute.pop_front();
            for(int x{0};x<4;x++){
                if(isValid(xxx+di[x],yyy+dj[x],vis)){
                    co.push_back(xxx+di[x]);co.push_back(yyy+dj[x]);
                    compute.push_back(co);
                    vis.push_back(co);
                    co.clear();
                }
            }
        }
        ans.push_back(vis.size());
        vis.clear();
    }
    sort(ans.rbegin(),ans.rend());
    cout<<cnt<<endl;
    cout<<ans[0]*ans[1]*ans[2];
    MyReadFile.close();
    return 0;
}
