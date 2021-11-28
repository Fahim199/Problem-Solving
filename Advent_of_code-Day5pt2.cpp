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
    vector <int>seats;
    int seatId{0};
    while (getline (MyReadFile, a)){
        checkSeat(a);
        seatId=rows*8 +columns;
        seats.push_back(seatId);
    }
    sort(seats.begin(),seats.end());

    for(int i{1};i<seats.size();i++){
        int prev=seats[i-1];
        int after=seats[i+1];
        if(prev !=(seats[i]-1)){
            if(seats[i-1]==(seats[i]-2)){
                cout<<(seats[i-1]+1);
                break;
            }
        }
    }
    MyReadFile.close();
    return 0;
}
