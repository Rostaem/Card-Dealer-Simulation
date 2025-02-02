#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int WIDTH = 40;

string getRandomCard() {
    vector<string> suits = {"Hearts", "Diamonds", "Clubs", "Spades"};
    vector<string> ranks = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};

    string suit = suits[rand() % suits.size()];
    string rank = ranks[rand() % ranks.size()];

    return rank + " of " + suit;
}

void displayCard(const string &card) {
    string label = "Casino Card:";
    int labelLength = label.length();
    int cardLength = card.length();

    int Fill = WIDTH - labelLength - cardLength - 2;
    string fill(Fill, '-');

    cout << string(WIDTH, '*') << endl;
    cout << endl;

    int padding = (WIDTH - cardLength) / 2;
    cout << setw(padding + cardLength) << card << endl;

    cout << endl;
    cout << label << " " << fill << " " << card << endl;

    cout << string(WIDTH, '*') << endl;
}

int main() {
    srand(time(0));
    string card = getRandomCard();
    displayCard(card);
    return 0;
}
