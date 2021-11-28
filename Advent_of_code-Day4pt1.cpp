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
    int country_id=0;                                //checks if cid is present
    int passport_fields=0;                           //number of password
    int cnt=0;


    while (getline (MyReadFile, a)) {
        if(a.empty()){                              //if a blank line, checks if passport is valid
            if(passport_fields>6){
                if(country_id==0 || passport_fields==8)cnt++;
            }
            country_id=0;
            passport_fields=0;
        }else{
            passport_fields++;
            int in=1;
            for(auto x:a){
                if(x==' '){
                    passport_fields++;
                    in=1;
                }else if(in==1){
                    if(x=='c')country_id++;
                    in=0;
                }

            }
        }
    }
    if(passport_fields>6){
        if(country_id==0|| passport_fields==8)cnt++;
    }
    cout<<cnt;

    // Close the file
    MyReadFile.close();
    return 0;
}
