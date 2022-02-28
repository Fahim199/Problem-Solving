//Problem link:https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/city-and-flood-1/
#include<bits/stdc++.h>
using namespace std;


int findPar(int u, vector<int> &parent) {
    if(u == parent[u-1]) return u;
    return parent[u-1] = findPar(parent[u-1], parent);
}

void unionn(int u, int v, vector<int> &parent) {
    u = findPar(u, parent);
    v = findPar(v, parent);
    parent[v-1]=u;
}
int main(){
	int N,m;
	cin >> N >> m;
	vector<int> parent(N);
	for(int i = 1;i<=N;i++)
	    parent[i-1] = i;

	for(int i = 0;i<m;i++) {
	    int u, v;
	    cin >> u >> v;
	    unionn(u,v,parent);
	}

	set<int>rootParents;
	for(int i=1; i<=N;i++) {
	    rootParents.insert(findPar(i,parent));
	}
	cout << rootParents.size() << endl;
	return 0;
}
