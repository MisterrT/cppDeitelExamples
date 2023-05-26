#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

#include "deckOfCards.h"

using namespace std;

DeckOfCards::DeckOfCards(){
    for(int i = 0; i < numOfSeeds; i++){
        for(int j = 0; j < numOfFigures; j++){
            deck[i][j] = 0;
        }
    }
    srand(time(0));
}

void DeckOfCards::shuffle(){
    int seed, figure, card = 0;
    while(card < numOfFigures*numOfSeeds){
        figure = rand()%numOfFigures; 
        seed = rand()%numOfSeeds;
        if( deck[seed][figure] == 0 ){
            deck[seed][figure] = card;
            card++;
        }
    }
}

void DeckOfCards::deal(){
    const char* seeds[numOfSeeds] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const char* figures[numOfFigures] = {"Ace", "Deuce", "Three", "Four", "Five", 
                                         "Six", "Seven", "Eight", "Nine", "Ten",
                                         "Jack", "Queen", "King"};
    int card = 0;
    while(card < numOfSeeds*numOfFigures){
        for(int i = 0; i < numOfSeeds; i++ ){
            for(int j = 0; j < numOfFigures; j++){
                if (deck[i][j] == card){
                    cout << setw(5) << right << figures[j] << " of "
                    << setw(8) << left << seeds[i] << (card%2 == 0 ? "\t" : "\n"); /* se card è pari tab per il successivo, altrimenti newline */
                }
            }
        }
        card++;
    }                                     
    cout << "\n" << endl;
}