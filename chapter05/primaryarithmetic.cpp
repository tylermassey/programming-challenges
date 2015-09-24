// primary arithmetic
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> toVector(int a) {
	vector<int> b;
	while(a!=0) {
		b.insert(b.begin(),a%10);
		a/=10;
	}
	return b;
}

void paddzeros(vector<int> &a, vector<int> &b) {
	while(a.size() != b.size()) 
		(a.size() < b.size()) ? a.insert(a.begin(),0) : b.insert(b.begin(),0);
}

int main() {
	int a, b;
	for(;;) {
		cin >> a >> b;
		if(a == 0 && b == 0) break;
		vector<int> number1 = toVector(a);
		vector<int> number2 = toVector(b);
		paddzeros(number1,number2);

		int count = 0, carry = 0;
		for(int i = number1.size()-1; i >= 0; i--) {
			if(number1[i] + number2[i] + carry >= 10) {
				carry = 1;
				count++;
			}
			else carry = 0;
		}

		if(count == 0) cout << "No carry operation." << endl;
		else if(count == 1) cout << "1 carry operation." << endl;
		else cout << count << " carry operations." << endl;
	}
	return 0;
}