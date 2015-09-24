// flapjacks
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int findLargest(vector<int> list, int end) {
	int largest = 0;
	for(int i = 0; i < list.size() - end; i++)
		if(list[i] > list[largest])
			largest = i;
	return largest;
}

int main() { 
	string line;
	while(getline(cin,line)) {
		// end is used to separate the sorted numbers
		// from the unsorted numbers
		int n, start, end = 0;
		vector<int> pancakes;
		istringstream iss(line);
		while(iss >> n) {
			cout << n << " ";
			pancakes.push_back(n);
		}
		cout << endl;
		int size = pancakes.size();
		while(!is_sorted(pancakes.begin(),pancakes.end())) {
			int x = findLargest(pancakes,end);
			reverse(pancakes.begin(),pancakes.begin()+findLargest(pancakes,end)+1);
			cout << size - x << " ";
			reverse(pancakes.begin(),pancakes.end()-end);
			cout << end + 1 << " ";
			end++;
		}
		cout << 0 << endl;
	}
	return 0;
}