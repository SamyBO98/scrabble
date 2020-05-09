#pragma once
#include <vector>
#include "sac.hpp"

struct PlayerHand
{
    int size;
    char hand[7];

    PlayerHand(Sac &sac);

    //Pioche pour compléter la main
    void reload(Sac &sac);
};
