#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> tokens;
    string a;
    int cnt=0;
    ifstream MyReadFile("t.txt");
    while (getline (MyReadFile, a))tokens.push_back((stoi(a)));
    for(int i{0};i<(tokens.size()-3);i++)if((tokens[i+1]+tokens[i+2]+tokens[i+3])>(tokens[i]+tokens[i+1]+tokens[i+2]))cnt++;
    cout<<cnt;
    MyReadFile.close();
    return 0;
}
