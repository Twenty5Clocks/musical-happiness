#include "CGame.cpp"

CGame* gameTemp = nullptr;

int main(){
    gameTemp = new CGame();

    gameTemp->PlayGame();
    return 0;
}