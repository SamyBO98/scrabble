#pragma once
#include "noeud.hpp"
#include <string>
using namespace std;
class Gaddag
{
public:
    Node *root;
    void fill(string fi);
    void insert(string word);
    void gaddagInverse(string word);
    bool contains(string word);
};
