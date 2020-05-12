#include "noeud.hpp"
#include "gaddag.hpp"
#include <fstream>
#include <iostream>
using namespace std;

// On remplit notre gaddag avec les mots puis avec les + et les mots inversés
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


// Fonction qui regarde si le mot est valide ou pas (Il regarde la valeur du bool et la retourne)
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



// Lit notre .txt et à chaque fin de mot lui mets un bool = true
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


// Inverse les mots avec le signe +
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




