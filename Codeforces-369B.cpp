<<<<<<< HEAD
#include<bits/stdc++.h>

using namespace std;

typedef  long long int ll;




int main(){

    ll n{},k{},l{},r{},t{},m{};
    cin>>n>>k>>l>>r>>t>>m;
    ll c{},h{};

    t-=m;
    n-=k;

    while(m!=0){
        h=m/k;
        if(m%k!=0)h++;
        cout<<h<<" ";
        m-=h;
        k--;
    }

    while(t!=0){
        h=t/n;
        if(t%n!=0)h++;
        cout<<h<<" ";
        t-=h;
        n--;
    }

    return 0;
}
=======
#include<bits/stdc++.h>

using namespace std;

typedef  long long int ll;




int main(){

    ll n{},k{},l{},r{},t{},m{};
    cin>>n>>k>>l>>r>>t>>m;
    ll c{},h{};

    t-=m;
    n-=k;

    while(m!=0){
        h=m/k;
        if(m%k!=0)h++;
        cout<<h<<" ";
        m-=h;
        k--;
    }

    while(t!=0){
        h=t/n;
        if(t%n!=0)h++;
        cout<<h<<" ";
        t-=h;
        n--;
    }

    return 0;
}
>>>>>>> 89ab7e5ab0f54796d58edc01d9242c4ea31005ee
