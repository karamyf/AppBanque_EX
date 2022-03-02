#include "comptePayant.h"
#include "compte.h"
#include "client.h"
#include "MAD.h"
#include <iostream>
#include "historique.h"

comptePayant::comptePayant()
{
    //cout<<"constructeur classe comptePayant"<<endl;
}

comptePayant::~comptePayant()
{
    //cout<<"destructeur classe comptePayant"<<endl;

}

void comptePayant::deposer(MAD montant)
{
    compte::solde.deposer(montant + montant * 0.05);
}

void comptePayant::retirer(MAD montant)
{
    compte::solde.retirer(montant + montant * 0.05);
}

