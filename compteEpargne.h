#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include <compte.h>
#include "MAD.h"

class compteEpargne : public compte
{
    public:
        compteEpargne();
        ~compteEpargne();
        void calculInteret();
        void deposer(MAD) override;
        void retirer(MAD) override;
        void transfert(compte* ,MAD) override;


    private:
        double tauxInteret;
        compteCourant* cc;
};

#endif // COMPTEEPARGNE_H
