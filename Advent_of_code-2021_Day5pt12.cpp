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

int main(){
    string a;
    ifstream MyReadFile("t.txt");
    map<string,int> b;

    while (getline (MyReadFile, a)){
        int in=0;
        string toke;
        string token;
        for(auto c:a){
           if(c==' ')in++;
           if(in==0){
              toke+=c;
           }
           if(in==3)token+=c;
           if(in==2)in++;
        }
        in=0;
        string x,xx,y,yy;
        for(auto c:toke){
            if(c==','){
                in++;
                continue;
            }
            if(in==0) x+=c;
            if(in==1)y+=c;
        }
        in=0;
        for(auto c:token){
            if(c==','){
                in++;
                continue;
            }
            if(in==0) xx+=c;
            if(in==1)yy+=c;
        }
        string e;


        int i=stoi(x);int j=stoi(y);
        while(true){

            e= to_string(i)+','+to_string(j);
            b[e]++;
//            cout<<e<<endl;
            if(i==stoi(xx) && j==stoi(yy))break;

            if(i<stoi(xx))i++;
            else if(i>stoi(xx))i--;

            if(j<stoi(yy))j++;
            else if (j>stoi(yy))j--;
        }



//        if(x==xx){
//            if(stoi(y)>stoi(yy)){
//                for(int i=stoi(yy);i<=stoi(y);i++){
//                    e=xx+','+to_string(i);
//                    b[e]++;
//                    cout<<e<<" "<<endl;
//                }
//            }else{
//                for(int i=stoi(y);i<=stoi(yy);i++){
//                    e=xx+','+to_string(i);
//                    b[e]++;
//                    cout<<e<<" "<<endl;
//                }
//
//            }
//
//        }else if(y==yy){
//
//            if(stoi(x)>stoi(xx)){
//                for(int i=stoi(xx);i<=stoi(x);i++){
//                    e=to_string(i)+','+yy;
//                    b[e]++;
////                    cout<<e<<" "<<endl;
//                }
//            }else{
//                for(int i=stoi(x);i<=stoi(xx);i++){
//                    e=to_string(i)+','+yy;
//                    b[e]++;
////                    cout<<e<<" "<<endl;
//                }
//
//            }
//
//
//        }
    }
    int cnt=0;
    map<string, int>::iterator it;
    for (it = b.begin(); it != b.end(); it++)
    {

              if((it->second)>1){
//                cout<<it->second;
                cnt++;
            }

    }
    cout<<cnt;







    MyReadFile.close();
    return 0;
}
