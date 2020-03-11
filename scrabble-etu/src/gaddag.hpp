#include "noeud.hpp"
#include <string>

class DictionaryTree
{
    Node *root;

public:
    //Remplit le dictionnaire
    void fill(std::string fi);
    void insert(std::string word);

    //Vérifie qu'un mot appartient bien au dictionnaire
    bool contains(std::string word);
};
