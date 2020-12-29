#include <iostream>
#include <string>
#ifndef CARD_H
#define CARD_H

using namespace std;

class Card
{

public:
 Card(int,int);
 string toString();

private:
   int face;
   int suit;
   static string faceArr[];
   static string suitArr[];
};

#endif
