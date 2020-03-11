#include "sac.hpp"

Sac::Sac(){
    for(int i =0; i<26; i++){
        for(int j=0 ; j<nombres[i]; j++){
            tabLettre.push_back(Lettre(letters[i], points[i]));
        }
    }
}



char Sac::tirage(){
    for(int i =0; i<7;i++){
        int random = rand() % tabLettre.size();
        mainJoueur.push_back(Lettre(tabLettre[random]));
        tabLettre[random].l = tabLettre[tabLettre.size()-1].l;
        tabLettre[random].nbPoints = tabLettre[tabLettre.size()-1].nbPoints;
        tabLettre.pop_back();
    }
    return 0;
}

Sac::~Sac(){
    tabLettre.clear();
}


void Sac::affichage(){
    for(int i =0; i<7; i++){
        cout << mainJoueur[i].l << " ";
    }
}