#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int cnt=0;
vector<string> tokens; vector<vector<string>>m; vector<string>b;vector<int>rem;vector<int>ans;
int tokenGetter(string a){
    string token;
    int l=0;
    for(int i=0;i<a.length();i++){
        if(a[i] !=' '&&a[i]!=',')token+=a[i];
        if(a[i]==' ' || i==(a.length()-1)||a[i]==','){
            if(!token.empty()){
                tokens.push_back(token);
                l+=stoi(token);
            }
            token.clear();
        }
    }
    return l;
}
void checkCombo(int j, int i,int val, int valu){
    for(int k{0};k<5;k++){
        cnt=0;
        if(m[j][k*val]=="-1"){
            cnt++;
            for(int f{1};f<5;f++){
                if(m[j][(k*val)+(f*valu)]=="-1")cnt++;
            }
            if(cnt==5){
                ans.push_back(rem[j]*stoi(b[i]));
                m[j].clear();
            }
        }
    }
}
int main(){
    string a;
    ifstream MyReadFile("t.txt");
    getline(MyReadFile,a);tokenGetter(a);b=tokens;getline(MyReadFile,a);tokens.clear();
    int n=0;
    while (getline (MyReadFile, a)){
        if(a.empty()){
            m.push_back(tokens);
            rem.push_back(n);n=0;
            tokens.clear();
        }else n+=tokenGetter(a);
    }
    m.push_back(tokens);tokens.clear();
    for(int i{0};i<b.size();i++){
        for(int j{0};j<m.size();j++){
            cnt=0;
            if(m[j].size()==0)continue;
            for(int k{0};k<25;k++){
                if(m[j][k]==b[i]){
                    m[j][k]="-1";
                    rem[j]-= stoi(b[i]);
                }
            }
            checkCombo(j,i,1,5);
            if(cnt==5)continue;
            checkCombo(j,i,5,1);
        }
    }
    cout<<ans[0]<<endl<<ans[ans.size()-1];
    MyReadFile.close();
    return 0;
}
