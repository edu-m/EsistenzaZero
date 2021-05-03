#include <iostream>
#include "func.h"
#define CONDITION target<func(a) || target> func(b) || a == b

main()
{
    double a, b, target;
    do
    {
        using namespace std;
        cout << "Inserisci il valore 'a' dell'intervallo> ";
        cin >> a;
        cout << "f(a)= " << func(a) << endl;
        cout << "Inserisci il valore 'b' dell'intervallo> ";
        cin >> b;
        cout << "f(b)= " << func(b) << endl;
        if (a > b)
            std::swap(b, a);
        cout << "Inserisci il valore obiettivo> ";
        cin >> target;
        if (CONDITION)
            cout << "Input non valido" << endl;
    } while (CONDITION);

    std::cout << "Premi qualunque tasto per procedere" << std::endl;
    system("PAUSE>NUL");
    eval(a, b, target);
    system("PAUSE>NUL");
    return 0;
}
