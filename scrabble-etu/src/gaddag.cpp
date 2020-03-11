#include "noeud.hpp"
#include "gaddag.hpp"
#include <fstream>
#include <iostream>
const int CHAR_OFFSET_START = 65;

void DictionaryTree::fill(std::string path)
{
    root = new Node(false);

    std::ifstream fi(path);

    if (!fi.is_open())
    {
        std::cerr << "Erreur." << std::endl;
        return;
    }

    std::string line;
    while (!fi.eof())
    {
        getline(fi, line);
        insert(line);
    }

    // for (int i = 0; i < ALPHABET_SIZE; i++)
    // {
    //     if (root->children[i] != nullptr)
    //         std::cout << (char)(i + CHAR_OFFSET_START) << std::endl;
    // }
}

bool DictionaryTree::contains(std::string word)
{
    Node *curr = root;
    for (unsigned int i = 0; i < word.size(); i++)
    {
        if (curr->children[word[i] - CHAR_OFFSET_START] != nullptr)
        {
            curr = curr->children[word[i] - CHAR_OFFSET_START];
            std::cout << "test " << curr->isFinal << std::endl;
            std::cout << std::endl;
        }
        else
            return false;
    }
    return curr->isFinal;
}

void DictionaryTree::insert(std::string word)
{
    Node *curr = root;

    for (unsigned int i = 0; i < word.size(); i++)
    {
        if (curr->children[word[i] - CHAR_OFFSET_START] == nullptr)
        {

            curr->children[word[i] - CHAR_OFFSET_START] = new Node(false);
        }
        curr = curr->children[word[i] - CHAR_OFFSET_START];
    }
    curr->isFinal = true;
}
