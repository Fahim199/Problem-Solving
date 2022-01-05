#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    int cnt=0;
    ifstream MyReadFile("t.txt");
    int prev=10000;
    while (getline (MyReadFile, a)){
        if(stoi(a)>prev) cnt++;
        prev=stoi(a);
    }
    cout<<cnt;
    MyReadFile.close();
    return 0;
}
