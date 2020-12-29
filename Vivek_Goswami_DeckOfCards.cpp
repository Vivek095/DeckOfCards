#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Vivek_Goswami_DeckOfCards.h"
using namespace std;

DeckOfCards::DeckOfCards()
{
    currentCard=0;
    // Iterate through the different suits
    for (int i=0; i<4; i++)
    {
        // Iterate through the different face values
        for (int j=0; j<13; j++)
        {
        Card c(j,i);
        deck.push_back(c);
        }
    }
}
void DeckOfCards::shuffle()
{
 srand(time(0));
 for (int i = 0; i < 52; i++)
 {
 int r1 = rand() % 52;
 int r2 = rand() % 52;
    //swap around two cards ... will have to temp store one of
    //them to do the swop
 Card c1 = deck[r1];
 Card c2 = deck[r2];
 Card c3 = c1;
 deck[r1] = c2;
 deck[r2] = c3;
 }
}

Card DeckOfCards::dealCard()
{
 return deck[currentCard++];
}
bool DeckOfCards::moreCards()
{
    if (currentCard<52)
    {
     return true;
    }
    else
    {
     return false;
    }
}
