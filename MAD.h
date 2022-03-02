#ifndef MAD_H
#define MAD_H
#include <list>
#include "compte.h"
#include "client.h"
#include "MAD.h"
#include <iostream>
#include "historique.h"
class MAD
{
    public:
        MAD(double dh);
        ~MAD();
        void deposer(double);
        void retirer(double);
        bool operator<(MAD) const;
        MAD operator*(double dh);
        MAD operator+(double dh);


    protected:
        double dh;
};

#endif // MAD_H
