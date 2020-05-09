#include "noeud.hpp"
#include "gaddag.hpp"
#include <fstream>
#include <iostream>
using namespace std;

void Gaddag::fill(std::string path)
{
    root = new Node(false);

    ifstream fi(path);

    if (!fi.is_open())
    {
        cerr << "Mauvais fichier " << endl;
        return;
    }

    string line;
    while (!fi.eof())
    {
        getline(fi, line);
        insert(line);
        gaddagInverse(line);
        
    }
}

bool Gaddag::contains(std::string word)
{
    Node *curr = root;
    for (unsigned int i = 0; i < word.size(); i++)
    {
        int idx = word[i] - 65;
        if(word[i] == '+')
            idx = 26;
        if (curr->children[idx] != nullptr)
        {
            curr = curr->children[idx];
            cout << "Est finale " << curr->isFinal << endl;
            cout << endl;
        }
        else
            return false;
            
    }
    return curr->isFinal;
}




void Gaddag::insert(string word)
{
    Node *curr = root;

    for (unsigned int i = 0; i < word.size(); i++)
    {
        int idx = word[i] - 65;
        if(word[i] == '+')
            idx = 26;
        if (curr->children[idx] == nullptr)
        {

            curr->children[idx] = new Node(false);
        }
        curr = curr->children[idx];
    }
    curr->isFinal = true;
}


void Gaddag::gaddagInverse(string word){
    int sizeGaddag = word.size() + 1;
    string curr(word.size() + 1, 'x');
    for(int i = 1 ; i<sizeGaddag ; i++){
        curr[i] = '+';
        for(int j = 0; j<word.size(); j++){
            if(j<i){
                curr[j] = word[i - j -1];
            }else if(j>=i){
                curr[j+1] = word[j];
            }
        }
        std::cout<<curr<<std::endl;
        insert(curr);
        
    }
}




