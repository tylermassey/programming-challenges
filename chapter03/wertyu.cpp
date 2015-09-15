// wertyu
#include <iostream>
#include <string>
using namespace std;

int main() {
	string keyboard = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"; 
	string line;
	while (getline(cin,line)) {
		for(int i = 0; i < line.size(); i++) {
			if (line[i] != ' ' && line[i] != 'Q' && line[i] != 'A' && line[i] != 'Z') 
				line[i] = keyboard[keyboard.find(line[i])-1];
		}
		cout << line << endl;
	}
	return 0;
}