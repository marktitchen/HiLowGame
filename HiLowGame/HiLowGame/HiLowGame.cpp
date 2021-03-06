// HiLowGame.cpp : Defines the entry point for the console application.

#include <stdafx.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <stdio.h>      
#include <stdlib.h>     
 
using namespace std;

// create function called cardFaceValue and pass the variable
// cardValue into it 
int cardFaceValue(int cardValue);

int cardFaceValue(int cardValue)
{
	// switch statement displays card face value
	switch (cardValue)
	{
		case 0: cout << "2 of Hearts" << endl; return 1; break;
		case 1: cout << "3 of Hearts" << endl; return 2; break;
		case 2: cout << "4 of Hearts" << endl; return 3; break;
		case 3: cout << "5 of Hearts" << endl; return 4; break;
		case 4: cout << "6 of Hearts" << endl; return 5; break;
		case 5: cout << "7 of Hearts" << endl; return 6; break;
		case 6: cout << "8 of Hearts" << endl; return 7; break;
		case 7: cout << "9 of Hearts" << endl; return 8; break;
		case 8: cout << "10 of Hearts" << endl; return 9; break;
		case 9: cout << "Jack of Hearts" << endl; return 10; break;
		case 10: cout << "Queen of Hearts" << endl; return 11; break;
		case 11: cout << "King of Hearts" << endl; return 12; break;
		case 12: cout << "Ace of Hearts" << endl; return 13; break;
		case 13: cout << "2 of Clubs" << endl; return 1; break;
		case 14: cout << "3 of Clubs" << endl; return 2; break;
		case 15: cout << "4 of Clubs" << endl; return 3; break;
		case 16: cout << "5 of Clubs" << endl; return 4; break;
		case 17: cout << "6 of Clubs" << endl; return 5; break;
		case 18: cout << "7 of Clubs" << endl; return 6; break;
		case 19: cout << "8 of Clubs" << endl; return 7; break;
		case 20: cout << "9 of Clubs" << endl; return 8; break;
		case 21: cout << "10 of Clubs" << endl; return 9; break;
		case 22: cout << "Jack of Clubs" << endl; return 10; break;
		case 23: cout << "Queen of Clubs" << endl; return 11; break;
		case 24: cout << "King of Clubs" << endl; return 12; break;
		case 25: cout << "Ace of Clubs" << endl; return 13; break;
		case 26: cout << "2 of Diamonds" << endl; return 1; break;
		case 27: cout << "3 of Diamonds" << endl; return 2; break;
		case 28: cout << "4 of Diamonds" << endl; return 3; break;
		case 29: cout << "5 of Diamonds" << endl; return 4; break;
		case 30: cout << "6 of Diamonds" << endl; return 5; break;
		case 31: cout << "7 of Diamonds" << endl; return 6; break;
		case 32: cout << "8 of Diamonds" << endl; return 7; break;
		case 33: cout << "9 of Diamonds" << endl; return 8; break;
		case 34: cout << "10 of Diamonds" << endl; return 9; break;
		case 35: cout << "Jack of Diamonds" << endl; return 10; break;
		case 36: cout << "Queen of Diamonds" << endl; return 11; break;
		case 37: cout << "King of Diamonds" << endl; return 12; break;
		case 38: cout << "Ace of Diamonds" << endl; return 13; break;
		case 39: cout << "2 of Spades" << endl; return 1; break;
		case 40: cout << "3 of Spades" << endl; return 2; break;
		case 41: cout << "4 of Spades" << endl; return 3; break;
		case 42: cout << "5 of Spades" << endl; return 4; break;
		case 43: cout << "6 of Spades" << endl; return 5; break;
		case 44: cout << "7 of Spades" << endl; return 6; break;
		case 45: cout << "8 of Spades" << endl; return 7; break;
		case 46: cout << "9 of Spades" << endl; return 8; break;
		case 47: cout << "10 of Spades" << endl; return 9; break;
		case 48: cout << "Jack of Spades" << endl; return 10; break;
		case 49: cout << "Queen of Spades" << endl; return 11; break;
		case 50: cout << "King of Spades" << endl; return 12; break;
		case 51: cout << "Ace of Spades" << endl; return 13; break;
	}
}

int cardValueConvert(int cardValue);

int cardValueConvert(int cardValue)
{
	// switch statement returns converted value - 
	// Run function not to display next card on screen
	switch (cardValue)
	{
	case 0: return 1; break;
	case 1: return 2; break;
	case 2: return 3; break;
	case 3: return 4; break;
	case 4: return 5; break;
	case 5: return 6; break;
	case 6: return 7; break;
	case 7: return 8; break;
	case 8: return 9; break;
	case 9: return 10; break;
	case 10: return 11; break;
	case 11: return 12; break;
	case 12: return 13; break;
	case 13: return 1; break;
	case 14: return 2; break;
	case 15: return 3; break;
	case 16: return 4; break;
	case 17: return 5; break;
	case 18: return 6; break;
	case 19: return 7; break;
	case 20: return 8; break;
	case 21: return 9; break;
	case 22: return 10; break;
	case 23: return 11; break;
	case 24: return 12; break;
	case 25: return 13; break;
	case 26: return 1; break;
	case 27: return 2; break;
	case 28: return 3; break;
	case 29: return 4; break;
	case 30: return 5; break;
	case 31: return 6; break;
	case 32: return 7; break;
	case 33: return 8; break;
	case 34: return 9; break;
	case 35: return 10; break;
	case 36: return 11; break;
	case 37: return 12; break;
	case 38: return 13; break;
	case 39: return 1; break;
	case 40: return 2; break;
	case 41: return 3; break;
	case 42: return 4; break;
	case 43: return 5; break;
	case 44: return 6; break;
	case 45: return 7; break;
	case 46: return 8; break;
	case 47: return 9; break;
	case 48: return 10; break;
	case 49: return 11; break;
	case 50: return 12; break;
	case 51: return 13; break;
	}
}

int main()
{
	int cardDeck[52];
	int i = 0;
	int previousCard = 0;
	char guess = NULL;
	char continueGame = NULL;
	int win = 0;
	int loss = 0;
	int temp =0;
	float balance;
	float stake = 0;
	float odds = 2.5;
	srand(time(0));
	// converted values
	int previousValue = 0;
	int currentValue = 0;

	// fill the array x51 
	for (int i = 0; i<51; i++)
	{
		cardDeck[i] = i;
	}

	// shuffle elements of the array
	for (i = 0; i<51; i++)
	{
		// randomise a number between 0-52 take one from it and end up storing
		// value in an cardDeck elment i and do this 51 times
		int r = i + (rand() % (51 - i));
		int temp = cardDeck[i]; cardDeck[i] = cardDeck[r]; cardDeck[r] = temp;
		
	}
	
	// display 1st element on screen
	for (i = 0; i<1; i++)
	{
		int temp = cardDeck[i];
		previousCard = cardDeck[i];
	}

	// how much would you like to gamble?
	cout << "Enter your starting balance : " << (char)156; cin >> balance;

	// Validation loop - if the user does not type in a integer value the computer
	// will continue to loop around until they have tyed in an integer.
	while (!cin)
	{
		cout << "That was no integer! Please enter an integer: " << endl;
		cin.clear();
		cin.ignore();
		cout << "Enter your balance: " << (char)156; cin >> balance;
	}

	do
	{
		//assign previous card value to variable and print previous card 
		previousValue = cardFaceValue(cardDeck[i - 1]);
		
		
		// Run Function
		currentValue = cardValueConvert(cardDeck[i]);
		
		// User makes a high / low guess
		cout << "Enter High or Low guess: " << endl;

		// if the user does not type in l / L / h / H it will continue to loop
		// until the user types in one of these characters
		while (guess != 'h' && guess != 'l' && guess != 'H' && guess != 'L')
		{
			cout << "Please enter a valid character (H, h, L, or l): "; cin >> guess;
		}
				
		// char 156 is used to display £ symbol on screen
		cout << "Enter your stake: " << (char)156; cin >> stake;

		// validation test if stake is greater than balance
		// display an error
		while (stake > balance)
		{
			cout << "ERROR! - You have insufficient funds!" << endl;
			cout << "your balance is: " << (char)156; cout << balance << endl;
			cout << "Enter your stake: " << (char)156; cin >> stake;

			// Validation loop - if the user does not type in a integer value the computer
			// will continue to loop around until they have tyed in an integer.
			while (!cin)
			{
				cout << "That was no integer! Please enter an integer: " << endl;
				cin.clear();
				cin.ignore();
				cout << "Enter your stake: " << (char)156; cin >> stake;
			}

		}
		
		// Validation loop - if the user does not type in a integer value the computer
		// will continue to loop around until they have tyed in an integer.
		while (!cin)
		{
			cout << "That was no integer! Please enter an integer: " << endl;
			cin.clear();
			cin.ignore();
			cout << "Enter your stake: " << (char)156; cin >> stake;
		}

		//1
		// check to see guess l and previous card less than card element i or
		// guess is h and previous card greater than card element i
		if ((guess == 'l' || guess == 'L') && (currentValue < previousValue))
		{
			win++;
			cout << "1 low guess - win" << endl;
			stake = odds * stake;
			balance = balance + stake;
			cout << "Win: " << (char)156 << balance << endl;
		}

		//2
		// check to see guess l and previous card greater than card element i or
		// guess is h and previous card less than card element i
		else if ((guess == 'l' || guess == 'L') && (currentValue > previousValue))
		{
			loss++;
			cout << "2. low guess -  lose" << endl;
			balance = balance - stake;
			cout << "Balance: " << (char)156 << balance << endl;
		}
				
		//3
		else if ((guess == 'h' || guess == 'H') &&  (currentValue > previousValue))
		{
			win++;
			stake = odds * stake;
			cout << "3. High guess - win" << endl;
			balance = balance + stake;
			cout << "Win: " << (char)156 << balance << endl;
		}

		//4
		else if ((guess == 'h' || guess == 'H') && (currentValue < previousValue))
		{
			loss++;
			balance = balance - stake;
			cout << "4. high guess - loss" << endl;
			cout << "Balance: " << (char)156 << balance << endl;
		}
			
		//5
		else
		{
			loss++;
			balance = balance - stake;
			cout << "5 - pair - loss" << endl;
			cout << "Balance: " << (char)156 << balance << endl;
		}
		
		// pass the curent value in cardDeck array into previous card variable
		// so that it can be compared for the next round
		previousCard = cardDeck[i];

		// Program asks user if they wish to contine you playing or not
		// if they type in n - program ends
		cout << "Do you wish to continue? Press 'n' to end game: "; cin >> continueGame;
		
		// if the user does not type in 'n' it will continue to play the game
		if (continueGame != 'n')
		{
			cout << endl << "Continuing game with cards below:" << endl << endl;
		}
			
		// increment index to point to next card
		i++;

		// reset global variables
		guess = NULL;
		stake = 0;
		//reset previous and current variables
		previousValue = 0;
		currentValue = 0;
		
		
		// assign next card to current card variable
		currentValue = cardValueConvert(cardDeck[i]);
		
	
	// do while loop continues until user types in n to end game
	} while (continueGame != 'n');

	
	// display variables: win / loss and balance on screen
	cout << "Wins = " << win << endl;
	cout << "Loss = " << loss << endl;
	cout << "Balance: " << (char)156 << balance << endl;

	return 0;
}









