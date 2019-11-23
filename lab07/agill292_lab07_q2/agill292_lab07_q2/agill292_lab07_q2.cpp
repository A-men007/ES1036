/*
ES1036b: Lab 07 Q2
Date : Nov 25, 2017
Name: Amanpreet Gill
Student Number : 250964445
uwo: agill292@uwo.ca
Program’s mission : program runs a card game 
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int displayMenu(string card) {

	int choice;

	cout << " Higher or Lower? \nOrder of suits: S < H < D < C" << endl;

	cout << "The card drawn at random was: " << card << endl;

	cout << "Will the next card be:\n1. Higher\n2. Lower\nEnter a choice: ";

	cin >> choice;

	return choice;
}

void compileCardDeck(string cardDeck[], const string suits[], const string denominations[]) {
	int x(0);
	string card;
	//loop to order suits
	for (int i = 0; i < 4; i++) {
		
		//loop to order alhpanumericals
		for (int j = 0; j < 13; j++) {
		
			//cardDeck[1]=suits[1]+denominations[1], cardDeck[2]=suits[1]+denominations[2]...
			cardDeck[x] = suits[i] + denominations[j];
			//counter for card deck total
			x++;
		}
	
	}

}


int main() {

	srand((unsigned int)time(NULL));
	//declare variables for holding card values
	//suit holds unicode for symbols of the cards ..... denom holds the values for each card
	const string suit[4] = { "S", "H", "D", "C"}, denom[13] = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10","J", "Q", "K"};
	string deck[52];
	string card, card1;
	int choice;
	char cont;
	int loss(0), wins(0);

	//automatically sets string deck to represent a deck of cards
	compileCardDeck(deck, suit, denom);
	do {
		int q = rand() % 51;
		card = deck[q];
		//go to display menu function
		choice = displayMenu(card);
		int w = rand() % 51;
		card1 = deck[w];

		cout << "The next card was: " << card1 << endl;

		//higher
		if (choice == 1) {

			//Use place holder as order
			if (w > q) {
				cout << "You win!" << endl;
				wins++;
			}
			else if (w < q) {
				cout << "You lose!" << endl;
				loss++;
			}

		}
		else if (choice == 2) {

			//Use place holder in deck as correct order 
			if (w < q) {
				cout << "You win!" << endl;
				wins++;
			}
			else if (w > q) {
				cout << "You lose!" << endl;
				loss++;
			}

		}
		cout << "Continue? (y/n): ";
		cin >> cont;
		while (!(cont == 'y' || cont == 'n')) {
			cout << "renter correct choice (y/n): ";
				cin >> cont;
		}

	} while (cont == 'y'); 

	cout << "Thanks for playing.\nWins: " << wins << "\nLosses: " << loss << endl;

	system("PAUSE");
    return 0;
}

