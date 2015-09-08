// hartals

#include <iostream>
#include <set>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for(int i = 0; i < testCases; i++) {
    	set<int> daysMissed;
    	int days, politcalParties;
        cin >> days;
        cin >> politcalParties;

        for(int j = 0; j < politcalParties; j++) {
        	int hartal;
        	cin >> hartal;
        	
        	for(int k = 1; k <= days; k++) {
        		if(k % hartal == 0 && (k+1) % 7 != 0 && k % 7 != 0)
        			daysMissed.insert(k);
        	}
        }
        cout << daysMissed.size() << endl;
    }
    return 0;
}
