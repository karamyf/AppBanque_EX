#ifndef COMPTEPAYANT_H
#define COMPTEPAYANT_H

#include <compte.h>
#include "client.h"
#include "MAD.h"
#include <iostream>
#include "historique.h"

class comptePayant : public compte
{
    public:
        comptePayant();
        ~comptePayant();
        void deposer(MAD montant) override;
        void retirer(MAD montant) override;

    protected:

    private:
};

#endif // COMPTEPAYANT_H
