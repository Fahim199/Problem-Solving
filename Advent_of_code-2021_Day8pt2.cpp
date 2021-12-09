#include <bits/stdc++.h>
using namespace std;
map<string,int> dd;vector<string>xx(10);vector<string> tokens; string first, sec;

int checks(string a,string b){
    int n=b.length();
    for(int i{0};i<b.length();i++){
        for(int j{0};j<a.length();j++){
            if(a[j]==b[i])n--;
            if(n<=0)return 1;
        }
    }
    return 0;
}
void digital(int tokenSize, int referenceNum,int pNum, int anoNum,int reversed){
    for(int i=0;i<tokens.size();i++){
        if(tokens[i].length()==tokenSize){
            if(reversed == 1){
                first=xx[referenceNum];sec=tokens[i];
            }else{
                first=tokens[i];sec=xx[referenceNum];
            }
            if(checks(first,sec)){
                dd[tokens[i]]=pNum;
                xx[pNum-1]=tokens[i];
                tokens[i]="a";
            }else{
                if(anoNum!=-1) dd[tokens[i]]=anoNum;
            }
        }
    }
}
int main(){
    string a;
    ifstream MyReadFile("t.txt");
    int cnt=0;
    int in=0;
    int n=0;
    while (getline (MyReadFile, a)){
        string token;string num;
        in=0;n=0;
        for(int i=0;i<a.length();i++){
            if(a[i] !=' ' && a[i]!='|')token+=a[i];
            if((a[i]==' ' || i==(a.length()-1)) && in!=1){
                sort(token.begin(),token.end());
                if(in==2){
                    int x=dd[token];
                    num+=to_string(x);
                }else if(in==0){
                    tokens.push_back(token);
                    if(token.length()==2){
                        dd[token]=1; xx[0]=token;
                    }else if(token.length()==4){
                        dd[token]=4; xx[3]=token;
                    }else if(token.length()==3){
                        dd[token]=7; xx[6]=token;
                    }else if(token.length()==7){
                        xx[7]=token; dd[token]=8;
                    }
                }
                token.clear();
            }else if(in==1 && a[i]==' '){
                in++;
                digital(5,0,3,-1,-1);digital(6,2,9,-1,-1);digital(5,8,5,2, 1);digital(6,4,6,0,-1);
            }else if(a[i]=='|')in++;
        }
        cnt+=stoi(num);
        tokens.clear();dd.clear();fill(xx.begin(), xx.end(), 0);
    }
    cout<<cnt;
    MyReadFile.close();
    return 0;
}
