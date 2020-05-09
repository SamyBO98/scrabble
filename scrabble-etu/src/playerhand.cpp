#include "playerhand.hpp"
#include "noeud.hpp"
#include <iostream>

PlayerHand::PlayerHand(Sac &sac)
{
    size = 0;
    this->reload(sac);
}

void PlayerHand::reload(Sac &sac)
{
    
    for (int i =size; i < 7; i++)
    {
        hand[i]=sac.tirage();
    }
    size = 7;
}
