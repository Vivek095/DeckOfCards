#include <iostream>
#include <string>
#include "Vivek_Goswami_card.h"
using namespace std;

string Card::faceArr[] = {"Ace","Deuce","Three", "Four", "Five", "Six", "Seven","Eight",
                    "Nine", "Ten", "Jack", "Queen","King"};
string Card::suitArr[] ={"Hearts", "Diamonds", "Clubs","Spades"};

Card::Card(int f,int s)
{
 face=f;
 suit=s;
}
string Card::toString()
{
 return faceArr[face]+ "of" +suitArr[suit];
}
