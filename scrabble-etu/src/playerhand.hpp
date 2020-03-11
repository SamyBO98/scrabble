#include <vector>
#include "sac.hpp"

struct PlayerHand
{
    std::vector<char> hand;

    PlayerHand(Sac &sac);

    //Pioche pour compléter la main
    void reload(Sac &sac);
};
