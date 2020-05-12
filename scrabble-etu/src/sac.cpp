#include "sac.hpp"

// Création du sac avec toutes les lettres et leurs nombres respectifs
Sac::Sac(){
    for(int i =0; i<26; i++){
        for(int j=0 ; j<nombres[i]; j++){
            tabLettre.push_back(Lettre(letters[i], points[i]));
        }
    }
}


// Tirage de 7 lettres aléatoires. On prend une lettre et on comble le vide avec la dernière lettre du tableau.
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

// Destructeur
Sac::~Sac(){
    tabLettre.clear();
}

// On affiche la main
void Sac::affichage(){
    for(int i =0; i<7; i++){
        cout << mainJoueur[i].l << " ";
    }
}