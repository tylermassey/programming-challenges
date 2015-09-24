// shoemaker
#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

typedef pair<int,double> taf;
bool comparator ( const taf& l, const taf& r) { 
	if (l.second == r.second) return l.first < r.first;
	else return l.second < r.second; 
}

int main() {
	int n, m, a, b;
	cin >> n;
	for(int i = 0; i < n; i++) {
		vector<pair<int,double> > timeandfines;
		cin >> m;
		for(int j = 0; j < m; j++) {
			cin >> a >> b;
			pair<int,double> taf(j,(double)a/b);
			timeandfines.push_back(taf);
		}
		sort(timeandfines.begin(),timeandfines.end(),comparator);
		for(int j = 0; j < m; j++) {
			cout << timeandfines[j].first+1;
			if(j < m-1) cout << " ";
		}
		cout << endl;
		if(i < n-1) cout << endl;
	}
	return 0;
}