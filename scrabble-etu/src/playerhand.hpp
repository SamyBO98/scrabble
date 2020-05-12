#pragma once
#include <vector>
#include "sac.hpp"

struct PlayerHand
{
    int size;
    char hand[7];

    PlayerHand(Sac &sac);

    //Gère la pioche quand le joueur a joué des lettres (quand il a moins de 7 lettres dans sa main)
    void reload(Sac &sac);
};
