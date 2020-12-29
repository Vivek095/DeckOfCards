#include <iostream>
#include <iomanip>
#include "Vivek_Goswami_Card.h"
#include "Vivek_Goswami_DeckOfCards.h"

using namespace std;

int main()
{
DeckOfCards deck;
deck.shuffle();

 for(int i=1; i<=52; i++)
 {
 string s = deck.dealCard().toString();
 cout <<setw(18)<<left<< s <<" ";
    if(i%4==0)
    {
    cout<<endl;
    }
 }

return 0;
}
