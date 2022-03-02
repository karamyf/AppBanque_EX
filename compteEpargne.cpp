#include "compteEpargne.h"
#include "compte.h"
#include "client.h"
#include "MAD.h"
#include <iostream>
#include <list>
#include "historique.h"

compteEpargne::compteEpargne()
{
    this -> tauxInteret = (tauxInteret < 100 && tauxInteret > 0)? tauxInteret : 0 ;
}

compteEpargne::~compteEpargne()
{
    cout<<"destructeur classe compteEpargne"<<endl;
}

void compteEpargne::calculInteret()
{
    MAD m_interet = solde * tauxInteret;
    this->retirer(m_interet);

}

void compteEpargne::deposer(MAD montant)
{
    this->solde.deposer(montant);
}


void compteEpargne::retirer(MAD montant)
{
    if(montant < this->solde * 0.5)
    {
            this->solde.retirer(montant);
    }
    else
    {
        cout<<"impossible de retirer"<<endl;
    }
}


void compteEpargne::transfert(compte* c, MAD montant)
{

    this->retirer(montant);
    c->deposer(montant);

}


void compteEpargne::calculInteret()
{

    MAD montant = this->solde * this->tauxInteret;
    this->crediter(montant);

}
