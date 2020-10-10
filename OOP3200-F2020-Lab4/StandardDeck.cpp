//Name: Fleur Blanckaert (100747083), Gabriel Dietrich (100764733)

#include "StandardDeck.h"

StandardDeck::StandardDeck()
{
	//Sets member from PlayingCard pointer to 0

	//Calls method Initialize() to allocate arrays and initialize size variable
	Initialize();
	
}

void StandardDeck::Initialize(PlayingCard& myRankIndex, PlayingCard& mySuitIndex)
{
	// Check if private member pointer is equal to 0

	// Allocate memory for 52 cards, sets size to 52

	// Loop to display every card of the deck in sensible order
	
}

StandardDeck::~StandardDeck()
	= default;

StandardDeck::StandardDeck(const StandardDeck& other_deck)
{
	// Copies the default constructor
}

StandardDeck& StandardDeck::operator=(const StandardDeck & other_deck)
{
	// Assigns the value of a card
	
	// returns a reference to the object
	return(*this);
}

int StandardDeck::CardsRemaining()
{
	// Returns the size of the cards array

	return 0;
}

void StandardDeck::DrawNextCard()
{
	// Returns the object at position[0] and removes the object
	
}

void StandardDeck::DrawRandomCard()
{
	// Returns a object a random position and removes it
	
}

void StandardDeck::Shuffle()
{
	// Reorder the remaining cards in the deck
	// Ace of hearts cannot be one of them
	
}
