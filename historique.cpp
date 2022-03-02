#include "historique.h"
#include <iostream>
#include "compte.h"
#include "client.h"
#include "MAD.h"
#include <iostream>
using namespace std;

int historique::count_numero_op = 0;

historique::historique(MAD montant , string libelle)
        :numero_op(++historique::count_numero_op)
{
    this -> montant = montant;
    this-> libelle = libelle;
}

historique::~historique()
{
    cout<<"destructeur classe historique"<<endl;
}
