#include <cctype>
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <cstdlib>
#include <cmath>
#include <tuple>
#include <unordered_set>

using namespace std;
typedef long long int ll;


int main(){
    string a;
    ifstream MyReadFile("t.txt");
    int horizontal=0,vertical=0,aim=0,in{},num{};
    while (getline (MyReadFile, a)){
        in=0;
        string token;
        for(auto c:a){
            if(in==1)token+=c;
            if(c==' ')in=1;
        }
        num=stoi(token);
        if(a[0]=='f'){
            horizontal+=num;
            vertical+=(aim*num);

        }else if(a[0]=='d'){
            aim+=num;
        }else{
            aim-=num;
        }
    }
    cout<<horizontal*vertical;



    MyReadFile.close();
    return 0;
}
