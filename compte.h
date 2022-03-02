#ifndef COMPTE_H
#define COMPTE_H
#include "compte.h"
#include "client.h"
#include "MAD.h"
#include <iostream>
#include <list>
#include "historique.h"
class client;
using namespace std;


class compte
{
    public:
        compte();
        ~compte();
        virtual void deposer(MAD montant) = 0;
        virtual void retirer(MAD montant) = 0;
        virtual void afficher() const = 0;
        void consulter() const;
        virtual void transfert(compte* c,MAD m_transfert) = 0;
        void add_op(historique* track_op);


    protected:
        MAD solde;
        client* prop;
        double montant;
        const int num_compte;
        static int count_num_compte;
        list<historique*> list_operations;


};

#endif // COMPTE_H
