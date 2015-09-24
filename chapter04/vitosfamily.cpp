// vito's family
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
using namespace std;

int main() {
	int n,m;
	cin >> n;
	for(int i = 0; i < n; i++) {
		vector<int> houses;
		cin >> m;
		for(int j = 0; j < m; j++) {
			int house;
			cin >> house;
			houses.push_back(house);
		}
		sort(houses.begin(),houses.end());
		int size = houses.size();
		int total = 0;
		int median = size/2;
		for(int i = 0; i < size; i++)
			if(i!=median) total += abs(houses[i]-houses[median]);
		cout << total << endl;
	}
	return 0;
}