// common permutations
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string line1, line2;
	while(getline(cin,line1)) {
		getline(cin,line2);
		int letters1[27] = {0};
		int letters2[27] = {0};
		vector<int> commonletters;	

		for(int i = 0; i < line1.size(); i++) 
			letters1[(int)line1[i]-96]++;
		for(int i = 0; i < line2.size(); i++) 
			letters2[(int)line2[i]-96]++;

		for(int i = 0; i < 27; i++){
			if(letters1[i] >= 1 && letters2[i] >= 1) {
				if(letters1[i] == letters2[i])
					for(int j = 0; j < letters1[i]; j++) 
						commonletters.push_back(i);
				else
					for(int j = 0; j < min(letters1[i],letters2[i]); j++) 
						commonletters.push_back(i);
			}
		}

		for(int i = 0; i < commonletters.size(); i++)
			cout << (char)(commonletters[i]+96);
		cout << endl;
	}
	return 0;
}