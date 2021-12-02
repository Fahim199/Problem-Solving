#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    ifstream MyReadFile("t.txt");
    int horizontal=0,vertical=0,aim=0,in{},num{};
    while (getline (MyReadFile, a)){
        in=0;
        string token;
        for(auto c:a){
            if(in==1) token+=c;
            if(c==' ') in=1;
        }
        num=stoi(token);
        if(a[0]=='f') horizontal+=num;
        else if(a[0]=='d') vertical+=num;
        else vertical-=num;
    }
    cout<<horizontal*vertical;
    MyReadFile.close();
    return 0;
}
