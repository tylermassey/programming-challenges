// automated judge script
#include <iostream>
#include <string>
#include <locale>
#include <vector>
using namespace std;

string getDigits(string line) {
	string digits;
	for(int i = 0; i < line.size(); i++)
		if(isdigit(line[i])) digits += line[i];
	return digits;
}

int main() {
	string number;
	int n,m,runs = 0;
	getline(cin,number);
	n = stoi(number);
	while(n!=0) {
		runs++;
		string line;
		vector<string> solution, teamInput;
		for(int i = 0; i < n; i++) {
			getline(cin,line);
			solution.push_back(line);
		}
		getline(cin,number);
		m = stoi(number);
		for(int i = 0; i < m; i++) {
			getline(cin,line);
			teamInput.push_back(line);
		}

		if(n==m) {
			bool equality = true;
			for(int i = 0; i < n; i++)
				if(solution[i].compare(teamInput[i]) != 0)
					equality = false;
			if(equality) {
				cout << "Run #" << runs << ": Accepted" << endl;
				getline(cin,number);
				n = stoi(number);
				continue;
			}
		}

		string solutionLineDigits;
		string teamInputLineDigits;
		for(int i = 0; i < n; i++) solutionLineDigits += getDigits(solution[i]);
		for(int i = 0; i < m; i++) teamInputLineDigits += getDigits(teamInput[i]);
		if (solutionLineDigits.compare(teamInputLineDigits) != 0) {
				cout << "Run #" << runs << ": Wrong Answer" << endl;
				getline(cin,number);
				n = stoi(number);
				continue;
		}
		else {
			cout << "Run #" << runs << ": Presentation Error" << endl;
			getline(cin,number);
			n = stoi(number);
			continue;
		}
	}
	return 0;
}