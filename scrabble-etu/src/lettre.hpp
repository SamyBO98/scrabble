#include <iostream>

using namespace std;



class Lettre{
    public:
    char l;
    int nbPoints;

    Lettre(const char &L, const int &NbPoints);
    Lettre(const Lettre &x);
    ~Lettre();

};