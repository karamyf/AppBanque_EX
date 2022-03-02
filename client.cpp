#include "compte.h"
#include "client.h"
#include "MAD.h"
#include <iostream>
#include <list>
int client::count_num_client = 0;

using namespace std;

client::client(string nom)
        :num_client(++client::count_num_client)
{
    this->listcompte = list<compte*>();
    this->nom = nom;
}

void client::ajouter_compte(compte* c)
{
    this->listcompte.push_back(c);
}

void client::afficher_list_compte() const
{
    /* for(int i=0 ; i < this->listcompte.size() ; i++ )
    {
            this->listcompte[i].afficher_list_compte();
    }
    */
    cout<<"Client : "<< nom <<endl;
    cout<<"N      : "<< num_client<<endl;
}

client::~client()
{
    this->listcompte.clear();
}
