#include <iostream>
#include <vector>
using namespace std;

long powertwo(long int n) {
	long int answer = 1; 
	while(n--){
		answer *= 2;
	}
	return answer;
}

vector<int> toVector(long int a) {
	vector<int> b;
	while(a!=0) {
		b.insert(b.begin(),a%10);
		a/=10;
	}
	return b;
}

int main() {
	for(long int i = 0; i < 100; i++) {
		cout << powertwo(i) << endl;
	}
	// vector<vector<int> > twopowers;
	// for(int i = 0; i <= 31; i++) {
	// 	twopowers.push_back(toVector(powertwo(i)));
	// }

	// long n;
	// while(cin >> n) {
	// 	vector<int> in = toVector(n);
	// 	bool check2 = false;
	// 	for(int i = 0; i <= 31; i++) {
	// 		bool check = true;
	// 		if( (in.size()*2) < (twopowers[i].size()) ){
				
	// 			for(int j = 0; j < in.size(); j++) {
	// 				if(in[j] != twopowers[i][j]) {
	// 					check = false;
	// 					continue;
	// 				}
	// 			}
	// 			if (check) {
	// 				cout << i << endl;
	// 				check2 = true;
	// 				break;
	// 			}
	// 		}
	// 	}
	// 	if(!check2)
	// 		cout << "no power of 2" << endl;
	// }





	return 0;
}