#include <bits/stdc++.h>
using namespace std;
int binChecker(int pointr,vector<string>tokens,int s, int val, int valu){
    vector<string>reducer;vector<int>record(12);
    char bin;
    while(true){
        fill(record.begin(), record.end(), 0);
        if(s>0) bin='1';
        else bin='0';
        for(auto c:tokens){
            if(c[pointr]==bin) reducer.push_back(c);
        }
        pointr++;
        if(reducer.size()==1) break;
        for(int i{0};i<reducer.size();i++){
            if(reducer[i][pointr]=='1') record[pointr]++;
            else record[pointr]--;
        }
        if(record[pointr]>=0)s=val;
        else s=valu;
        tokens=reducer;
        reducer.clear();
    }
    return stoi(reducer[0],0,2);
}
int main(){
    vector<string> tokens;int s;
    string str;vector<int>record(12);
    ifstream MyReadFile("t.txt");
    while (getline (MyReadFile, str)){
        tokens.push_back(str);
        for(int i{0};i<12;i++){
            if(str[i]=='1') record[i]++;
            else record[i]--;
        }
    }
    if(record[0]>0)s=1;
    else s=0;
    cout<<binChecker(0,tokens,s,1,0) * binChecker(0,tokens,abs(s-1),0,1);
    MyReadFile.close();
    return 0;
}
