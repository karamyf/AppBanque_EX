#ifndef CLIENT_H
#define CLIENT_H
#include "compte.h"
#include "client.h"
#include "MAD.h"
#include <iostream>
#include <list>
class compte;

using namespace std;

class client
{
    public:
        client(string nom);
        ~client();
        void ajouter_compte(compte* c);
        void afficher_list_compte() const;

    private:
        string nom;
        const int num_client;
        static int count_num_client;
        list<compte*> listcompte;
};




#endif // CLIENT_H
