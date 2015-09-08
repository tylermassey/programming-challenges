// stack 'em up

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct ShuffleMove {
	int i, j;
};

string getCard(int i) {
	string card = "";
	int suit = 0;
	if(i >= 14 && i <= 26) {
		suit = 1;
		i -= 13;
	}
	else if (i >= 27 && i <= 39) {
		suit = 2;
		i -= 26;
	}
	else if (i >= 40 && i <= 52) {
		suit = 3;
		i -= 39;
	}

	if(i == 1)
		card.append("2 of ");
	else if(i == 2)
		card.append("3 of ");
	else if(i == 3)
		card.append("4 of ");
	else if(i == 4)
		card.append("5 of ");
	else if(i == 5)
		card.append("6 of ");
	else if(i == 6)
		card.append("7 of ");
	else if(i == 7)
		card.append("8 of ");
	else if(i == 8)
		card.append("9 of ");
	else if(i == 9)
		card.append("10 of ");
	else if(i == 10)
		card.append("Jack of ");
	else if(i == 11)
		card.append("Queen of ");
	else if(i == 12)
		card.append("King of ");
	else if(i == 13)
		card.append("Ace of ");

	if(suit == 0)
		card.append("Clubs");
	else if(suit == 1)
		card.append("Diamonds");
	else if(suit == 2)
		card.append("Hearts");
	else if(suit == 3)
		card.append("Spades");

	return card;

}

int main() {
	int testCases;
	cin >> testCases;

	for(int i = 0; i < testCases; i++) {
		if(i != 0)
			cout << endl;
		int n;
		cin >> n;
		vector<vector<ShuffleMove> > shuffles;
		for(int j = 0; j < n; j++) {
			vector<ShuffleMove> shuffle;
			for(int k = 1; k <= 52; k++) {
				int ii, jj;
				cin >> ii;
				if(k != ii) {
					ShuffleMove move;
					move.i = k;
					move.j = ii;
					shuffle.push_back(move);
				}
			}
			shuffles.push_back(shuffle);
		}

		vector<int> shufflesUsed;
		string line;
		getline(cin,line);
		while(getline(cin,line)) {
			if(line.empty())
				break;
			shufflesUsed.push_back(stoi(line));
		}

		int deck[52+1]; //for indexing 1 to 52
		for(int j = 1; j <= 52; j++) deck[j] = j;

		for(int j = 0; j < shufflesUsed.size(); j++) {
			int tmpDeck[52+1];
			for(int k = 1; k <= 52; k++) tmpDeck[k] = deck[k];
			int si = shufflesUsed[j];
			vector<ShuffleMove> shuffle = shuffles[si-1];
			for(int k = 0; k < shuffle.size(); k++) {
				ShuffleMove move = shuffle[k];
				// cout << move.i << " " << move.j << endl;
				deck[move.i] = tmpDeck[move.j];
			}
		}

		for(int j = 1; j <= 52; j++) {
			cout << getCard(deck[j]) << endl;
		}

	}


	return 0;
}