#pragma once

struct Node
{
    bool isFinal;
   //Node *children[26];
   //On rajoute un enfant en plus pour gérer le + du gaddag inverse
   Node *children[27];

    Node() : isFinal(false) {}
    Node(bool isFinal) : isFinal(isFinal) {}
};
