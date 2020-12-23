#include "qstd.h"
using namespace qstd;


void connecteur(int index_1, int index_2, int *valeur){
    int i;
    if (valeur[index_1] > valeur[index_2]){
        i = valeur[index_1];
        valeur[index_1] = valeur[index_2];
        valeur[index_2] = i;
    }
}


int main()
{
    int valeur[4];
    int i;

    for (i = 0; i < 4; i++){
        valeur[i] = qrand()%50;
        cout<<"Valeur "<<i + 1<<" = "<<valeur[i]<<"\n";
    }

    cout<<"\n";

    connecteur(0, 2, &valeur[0]);
    connecteur(1, 3, &valeur[0]);
    connecteur(0, 1, &valeur[0]);
    connecteur(2, 3, &valeur[0]);
    connecteur(1, 2, &valeur[0]);

    for (i = 0; i < 4; i++){
        cout<<"Valeur "<<i + 1<<" = "<<valeur[i]<<"\n";
    }

    /*fils.ajouteConnecteur(0, 2, 0);
    fils.ajouteConnecteur(1, 3, 1);
    fils.ajouteConnecteur(0, 1, 2);
    fils.ajouteConnecteur(2, 3, 2);
    fils.ajouteConnecteur(1, 2, 3);*/
}
