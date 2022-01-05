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

vector<string> tokens;

void tokenGetter(string a){
    string token;
    for(int i=0;i<a.length();i++){
        if(a[i] !=' ')token+=a[i];
        if(a[i]==' ' || i==(a.length()-1)){
            if(!token.empty())tokens.push_back(token);
            token.clear();
        }
    }
}
int rows=0;int columns=0;
void checkSeat(string a){
    rows=0;columns=0;
    int rowStart=0;
    int rowEnd=127;
    int colStart=0;
    int colEnd=7;
    int startPoint=rowStart;
    int endPoint=rowEnd;
    for(int i{0};i<10;i++){
        char c=a[i];
        if(i==7){
            startPoint=colStart;
            endPoint=colEnd;
        }
        int mid=(startPoint+endPoint)/2;
        if(c=='F'|| c=='L'){
            if((startPoint+1)!=endPoint){
                endPoint=mid;
            }else{
                if(c=='F')rows=startPoint;
                else columns=startPoint;
            }
        }else{
            if((startPoint+1)!=endPoint){
                startPoint=mid+1;
            }else{
                if(c=='B')rows=endPoint;
                else columns=endPoint;
            }
        }

    }
}
int main(){
    string a;
    ifstream MyReadFile("t.txt");
    int maxS{0};
    int seatId{0};
    while (getline (MyReadFile, a)){
        checkSeat(a);
        seatId=rows*8 +columns;
//        cout<<seatId<<endl;
        if(seatId>maxS)maxS=seatId;
    }
    cout<<maxS;
//    for(auto c:tokens){
//        cout<<c<<endl;
//    }
    MyReadFile.close();
    return 0;
}
