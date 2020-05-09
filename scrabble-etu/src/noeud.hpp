#pragma once

struct Node
{
    bool isFinal;
   //Node *children[26];
   //Ajout du + pour le gaddag
   Node *children[27];

    Node() : isFinal(false) {}
    Node(bool isFinal) : isFinal(isFinal) {}
};
