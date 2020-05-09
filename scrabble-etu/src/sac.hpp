#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <array>
#include <vector>
#include "lettre.hpp"
using namespace std;

struct Sac {
    array<char, 26> letters = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	array<int, 26> nombres = { 9,2,2,3,15,2,2,2,8,1,1,5,3,6,6,2,3,6,6,6,6,2,1,1,1,1 };
	array<int, 26> points = { 1,3,3,2,1,4,2,4,1,8,10,1,2,1,1,3,2,1,1,1,1,4,10,10,10,10 };
    vector<Lettre> mainJoueur;
    vector<Lettre> tabLettre;
    Sac();
    ~Sac();
	//array<char, 102> letters = { 'a','a','a','a','a','a','a','a','a','b','b','c','c','d','d','d','e','e','e','e','e','e','e','e','e','e','e','e','e','e','e','f','f','g','g','h','h','i','i','i','i','i','i','i','i','j','k','l','l','l','l','l','m','m','m','n','n','n','n','n','n','o','o','o','o','o','o','p','p','q','q','q','r','r','r','r','r','r','s','s','s','s','s','s','t','t','t','t','t','t','u','u','u','u','u','u','v','v','w','x','y','z' };
	char tirage();
    void affichage();


};