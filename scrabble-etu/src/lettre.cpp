#include "lettre.hpp"





Lettre::Lettre(const char &L, const int &NbPoints){
    l=L;
    nbPoints = NbPoints;
}
Lettre::Lettre(const Lettre &x){
    l = x.l;
    nbPoints = x.nbPoints;
}


Lettre::~Lettre(){
    l = NULL;
    nbPoints = NULL;
}