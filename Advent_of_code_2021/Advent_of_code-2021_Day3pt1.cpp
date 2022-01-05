#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;int num;
    ifstream MyReadFile("t.txt");
    vector<int>record(12);
    while (getline (MyReadFile, str)){
        for(int i{0};i<12;i++){
            if(str[i]=='1') record[i]++;
            else record[i]--;
        }
    }
    str.clear();
    for(auto rec:record){
        if(rec>0) str+='1';
        else str+='0';
    }
    num=stoi(str,0,2);//converting to binary;
    cout<<num*(num^stoi("111111111111",0,2));
    MyReadFile.close();
    return 0;
}
