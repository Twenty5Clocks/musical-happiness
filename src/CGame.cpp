#include "CGame.h"
#include <iostream>



CGame::CGame()
{
    currentInning = 0;
}
void CGame::AtBat(){
    std::cout << "Ran an inning!" << std::endl;
}
void CGame::PlayGame(){
    for(int i = 0; i <10; i++){
        AtBat();
    }
}
        
