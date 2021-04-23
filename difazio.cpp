#include <iostream>
#include "func.h"

main()
{
    double a,b;
    int cont;
    do{
        using namespace std;
        cout<<"Inserisci il valore 'a' dell'intervallo> ";
        cin>>a;
        cout<<"Inserisci il valore 'b' dell'intervallo> ";
        cin>>b;
        cout<<"Inserisci il numero di iterazioni> ";
        cin>>cont;
        cout<<"f(a)= "<<func(a)<<endl;
        cout<<"f(b)= "<<func(b)<<endl;
        cout<<"Premi qualunque tasto per procedere";
        system("PAUSE>NUL");
    }while(func(a)*func(b)>0 || a==b || cont<=0);
    
    difazio(a,b,cont);
    return 0;
}
