#ifndef COMPTECOURANT_H
#define COMPTECOURANT_H
#include <compte.h>
#include "MAD.h"

class compteCourant : public compte
{
    public:
        compteCourant(MAD solde,MAD decouvert);
        ~compteCourant();
        void deposer(MAD) override;
        void retirer(MAD) override;
        void transfert(compte*,MAD) override;


    private:
        MAD decouvert;
};

#endif // COMPTECOURANT_H
