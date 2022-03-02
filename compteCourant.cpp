#include "compteCourant.h"
#include "compte.h"
#include "client.h"
#include "MAD.h"
#include <iostream>
#include <list>
#include "historique.h"

compteCourant::compteCourant(MAD solde,MAD decouvert)
{
    cout<<"constructeur classe compteCourant"<<endl;
    this->decouvert = decouvert;
    this->solde = solde;
}

compteCourant::~compteCourant()
{
    cout<<"destructeur classe compteCourant"<<endl;

}

void compteCourant::deposer(MAD montant)
{
    this->solde.deposer(montant);
}

void compteCourant::retirer(MAD montant)
{
    this->solde.retirer(montant);
}

void compteCourant::transfert(compte* c,MAD m_transfert)
{
    this->retirer(m_transfert);
    c->deposer(m_transfert);
}
