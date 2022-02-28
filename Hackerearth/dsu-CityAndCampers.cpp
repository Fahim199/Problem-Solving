https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-campers/
#include<bits/stdc++.h>
using namespace std;

int findPar(int u, vector<int> &parent) {
    if(u == parent[u]) return u;
    return parent[u] = findPar(parent[u], parent);
}
//merges the size
void mergeParents(int u, int v,vector<int> &Size,multiset<int> &Sizes){
    Sizes.erase(Sizes.find(Size[u]));
    Sizes.erase(Sizes.find(Size[v]));
    Sizes.insert(Size[u]+Size[v]);
}

void unionn(int u, int v, vector<int> &parent, vector<int> &Size,multiset<int> &Sizes) {
    u = findPar(u, parent);
    v = findPar(v, parent);
    if(u!=v){
        if(Size[u]<Size[v])
            swap(u,v);
        parent[v]=u;

        //updates the size
        mergeParents(u,v,Size,Sizes);
        Size[u]+=Size[v];
    }
}
int main(){
	int N,m;
	cin >> N >> m;
	vector<int> parent(N);
	vector<int> Size(N, 1);
    multiset<int>Sizes;
	for(int i = 0;i<N;i++){
        parent[i] = i;
        Sizes.insert(1);
	}

	for(int i = 0;i<m;i++) {
	    int u, v;
	    cin >> u >> v;
	    u--;v--;
	    unionn(u,v,parent,Size,Sizes);
	    if(Sizes.size()==1)
            cout<<0<<endl;
        else{
            int maxi= *(--Sizes.end());
            int mini= *Sizes.begin();
            cout<<maxi-mini<<endl;
        }

	}

	return 0;
}
