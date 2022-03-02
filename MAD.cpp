#include "compte.h"
#include "client.h"
#include "MAD.h"
#include <iostream>
#include <list>
using namespace std;

MAD::MAD(double dh)
{
    this->dh = dh;
}

MAD::~MAD()
{
    cout<<"destructeur classe MAD"<<endl;
}


void MAD::deposer(double montant)
{
    this->dh += montant;
}

void MAD::retirer(double montant)
{
    this->dh -= montant;
}

MAD MAD::operator*(double dev)
{
    return this->dh * dev ;
}

MAD MAD::operator+(double dev)
{
    return this-> dh + dev;
}

bool MAD::operator<=(MAD inf) const
{
    return this->dh <= inf.dh;
}

void MAD::deposer(MAD montant)
{
    this->dh += montant.dh;
}

void MAD::retirer(MAD montant)
{
    this->dh -= montant.dh;
}


