#include <ctime>
#include <iostream>
#include "StandardDeck.h"

void Pause() {
	std::cout << "\nPress \'ENTER\' to continue..." << std::endl;
	std::cin.ignore();	fflush(stdin);
}



int main()
{
	StandardDeck cards;
	
	/*	Your main() function should demonstrate each of the features of the StandardDeck class*/
	srand(time(nullptr)); // seed the random number generator

	// create a deck
	std::cout << "A deck has been created\n";
	
	// Show the deck object as initialized
	std::cout << Initialize() << std::endl;
	Pause();
	
	// Draw the next card and show it
	std::cout << "The next card has been drawn: " << cards.DrawNextCard() << std::endl;
	Pause();

	// Draw a random card and show it
	std::cout << "The random card has been drawn: " << cards.DrawRandomCard() << std::endl;
	Pause();
	
	// Show the deck with the remaining cards
	std::cout << "Below are the remaining cards of the deck: \n";
	std::cout << cards.CardsRemaining() << std::endl;
	Pause();	
	
	// Shuffle the deck and show the result
	std::cout << "Below is a new shuffled deck\n";
	std::cout << cards.Shuffle() << std::endl;;
	Pause();
	
	// Reset the deck and show the result
	std::cout << "The deck has been reset\n";
	std::cout << cards;
	Pause();
	
}


