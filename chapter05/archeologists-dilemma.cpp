#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long int N;
	while(cin >> N) {
		long int T = 2, m = N;
		while(m/=10) T++;
		for(;;T++) {	
			int long E = ceil(log2(N) + T*log2(10));
			int long D = floor(log2(N+1)+T*log2(10));
			if(E == D) {
				cout << E << endl;
				break;
			}
		}
	}
	return 0;
}