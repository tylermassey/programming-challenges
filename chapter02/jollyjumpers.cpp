// jolly jumpers

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	while(cin >> n) {

		int a, b;
		cin >> a;

		if(n == 1) {
			cout << "Jolly" << endl;
			continue;
		}

		bool jolly[n-1] = {0};
		for(int i = 0; i < n-1; i++) {
			cin >> b;
			int diff = abs(a-b);
			if(diff >= 0 && diff <= n-1)
				jolly[diff-1] = true;
			a = b;
		}

		bool isJolly = true;
		for(int i = 0; i < n-1; i++)
			if(jolly[i] == false)
				isJolly = false;

		if(isJolly) cout << "Jolly" << endl;
		else cout << "Not jolly" << endl;
		
	}
	return 0;
}