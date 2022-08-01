#ifndef DEF_CGAME_H
#define DEF_CGAME_H

#include <iostream>

class CGame
{
    private:
        int currentInning;

    public:
        CGame(void);
        int gameId;
        void AtBat();
        void PlayGame();

};


#endif
