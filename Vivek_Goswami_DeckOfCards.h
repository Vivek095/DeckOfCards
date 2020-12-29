#include "Vivek_Goswami_Card.h"
#include <vector>
#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

using namespace std;

class DeckOfCards
{

public:
DeckOfCards();
void shuffle();
Card dealCard();
bool moreCards();

private:
int currentCard;
vector <Card> deck;
};

#endif
