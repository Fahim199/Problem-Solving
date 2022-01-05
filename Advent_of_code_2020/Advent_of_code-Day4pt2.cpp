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
vector<string>eyeC{"amb","blu","brn","gry","grn","hzl","oth"};

int checkFields(string fieldd,string fieldv){
    if(fieldd=="byr"){
        int f=stoi(fieldv);
        if(f<1920||f>2002)return -1;
    }else if(fieldd=="iyr"){
        int f=stoi(fieldv);
        if(f<2010||f>2020)return -1;
    }else if(fieldd=="eyr"){
        int f=stoi(fieldv);
        if(f<2020||f>2030)return -1;
    }else if(fieldd=="hgt"){
        if(fieldv.back()=='n'){
            fieldv.erase(fieldv.end()-2,fieldv.end());
            int f=stoi(fieldv);
            if(f<59||f>76)return -1;
        }else if(fieldv.back()=='m'){
            fieldv.erase(fieldv.end()-2,fieldv.end());
            int f=stoi(fieldv);
            if(f<150||f>193)return -1;
        }else return -1;
    }else if(fieldd=="hcl"){
        if(fieldv[0]='#' && fieldv.length()==7){
            for(int i=1;i<7;i++){
                if(fieldv[i]>='a'&&fieldv[i]<='f'||fieldv[i]>='0' && fieldv[i]<='9'){
                    continue;
                }else return -1;
            }
        }else return -1;


    }else if(fieldd== "ecl"){
        if(find(eyeC.begin(),eyeC.end(),fieldv)==eyeC.end())return -1;
    }else if(fieldd=="pid"){
        if(fieldv.length()==9){
            for(auto c:fieldv){
                if(!isdigit(c))return -1;
            }
        }else return -1;
    }else if(fieldd=="cid") return 1;

    return 1;

}

int main(){
    string a;
    ifstream MyReadFile("t.txt");
    int c=0;
    int cn=0;
    int cnt=0;
    string pfield("");
    string fieldValue("");
    int checked=1;
    int n=1;

    while (getline (MyReadFile, a)) {
        if(a.empty()){
            if(checkFields(pfield,fieldValue)==-1){
                checked=-1;
            }
            if(cn>6 && checked==1){
                if(c==0||cn==8){
                    cnt++;
                }
            }
            c=0;
            cn=0;
            checked=1;
            pfield.clear();fieldValue.clear();
        }else{

            cn++;
            int in=1;
            int fie=1;
            if(!pfield.empty()){
                if(checkFields(pfield,fieldValue)==-1){
                    checked=-1;
                }
                pfield.clear();fieldValue.clear();
            }
            for(auto x:a){
                if(x==' '){
                    cn++;
                    in=1;
                    fie=1;
                    if(!pfield.empty()){
                        if(checkFields(pfield,fieldValue)==-1){
                            checked=-1;
                            break;
                        }
                        pfield.clear();fieldValue.clear();
                    }

                }else if(in==1){
                    if(x=='c')c++;
                    pfield+=x;
                    in=0;
                }else{
                    if(x==':'){
                        fie=0;
                        continue;
                    }
                    if(fie==1)pfield+=x;
                    else fieldValue+=x;

                }

            }
        }
    }
    if(checkFields(pfield,fieldValue)==-1)checked=-1;
    if(cn>6 && checked==1){
        if(c==0||cn==8)cnt++;
    }
    cout<<cnt;


    MyReadFile.close();
    return 0;
}
