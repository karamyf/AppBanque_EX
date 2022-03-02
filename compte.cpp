#include "compte.h"
#include "client.h"
#include "MAD.h"
#include <iostream>
#include <list>
#include "historique.h"
using namespace std;
int compte::count_num_compte = 0;

compte::compte()
       :num_compte(++compte::count_num_compte)
{
    cout<<"constructeur classe compte"<<endl;
    this->solde = 0;
    this->prop = "client";
}

compte::~compte()
{
    cout<<"destructeur classe compte"<<endl;
}



/*void compte::consulter()
{
    cout<<"Client   :"<<prop<<endl;
    cout<<"N Compte :"<<num_compte<<endl;
    cout<<"Solde    :"<<solde<<endl;
}
*/


void compte::add_op(historique* track_op)
{

    this->list_operations.push_back(track_op);

}
