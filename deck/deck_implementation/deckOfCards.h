

class DeckOfCards{
    public:
        const static int numOfSeeds = 4;
        
        const static int numOfFigures = 13;

        DeckOfCards();
        
        void shuffle();
        
        void deal();

    private:
        int deck[numOfSeeds][numOfFigures];
};