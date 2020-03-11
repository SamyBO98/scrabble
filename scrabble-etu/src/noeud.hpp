#pragma once

struct Node
{
    bool isFinal;
    Node *children[26];

    Node() : isFinal(false) {}
    Node(bool isFinal) : isFinal(isFinal) {}
};
