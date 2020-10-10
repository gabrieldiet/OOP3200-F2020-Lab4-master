/** OOP3200. F2020. StandardDeck.h
 *
 *  In this lab you will create your own collection class called StandardDeck, which
 *	will 'contain' objects of the PlayingCard class.  The intent of the class is to
 *	represent a standard deck of 52 cards that might be useful in a card game type
 *	application.  
 *
 *	@author		Thom MacDonald
 *	@author		Tom Tsiliopoulos
 *	@version	2020.10
 *	@since		Jul 2018
 *	@see		Bronson, G. (2012). A First Book of C++ (4th ed.). Boston, MA: Course Technology.
*/

#pragma once
#ifndef __STANDARD_DECK__
#define __STANDARD_DECK__

#include "PlayingCard.h"

class StandardDeck
{
	// Initialization:

	//Default constructor
	StandardDeck(); 
	
	//Initialize method that is set to virtual for inheritance purposes 
	virtual void Initialize(PlayingCard& myRankIndex, PlayingCard& mySuitIndex);

	// Rule of three:
	~StandardDeck(); //Destructor
	StandardDeck(const StandardDeck& other_deck); //Copy Constructor
	StandardDeck& operator=(const StandardDeck& other_deck); //Assignment operator

	// Accessors:
	int CardsRemaining();

	// Mutators:
	void DrawNextCard();
	void DrawRandomCard();
	void Shuffle();
};

#endif /* defined (__STANDARD_DECK__) */

