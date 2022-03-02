#pragma once
#ifndef HISTORIQUE_H
#define HISTORIQUE_H
#include "MAD.h"
#include <ctime>
#include <iostream>
#include "compte.h"
#include "client.h"
#include <list>
#include "historique.h"
using namespace std;
class historique

{
    public:
        historique(MAD montant,string libelle);
        ~historique();

    private:
        time_t now;
        const int numero_op;
        static int count_numero_op;
        MAD montant;
        string libelle;

};

#endif // HISTORIQUE_H
