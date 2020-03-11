#include "playerhand.hpp"
#include "noeud.hpp"
#include <iostream>

PlayerHand::PlayerHand(Sac &sac)
{
    hand.resize(0);
    this->reload(sac);
}

void PlayerHand::reload(Sac &sac)
{
    const int missingLetters = 7 - hand.size();
    for (int i = 0; i < missingLetters; i++)
    {
        this->hand.push_back(sac.tirage());
    }
}
