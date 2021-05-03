#include <utility>
#include <math.h>
#define CURRENT_ITERATION "x= " << m << ", " \
                                << "f(x)=" << fm << std::endl
#define FUNC (x * x) - 3 //inserire qui la legge della funzione
#define PRECISION 0.000015

double eval(double, double, double);
double func(double);

double eval(double a, double b, double target)
{
    static int cap = 25;
    double m = (a + b) / 2;
    double fm = func(m);
    if (cap > 0)
    {
        //std::cout<<target<<"-"<<fm<<"="<<abs(target-fm)<<std::endl;
        if (abs((target - fm)) < PRECISION)
        {
            std::cout << "Trovato valore esatto f(x)=" << fm << " per x= " << m << std::endl;
            return fm;
        } //se è uguale al target siamo fortunati, non c'è bisogno di procedere
        else if (fm > target)
        {
            cap--;
            std::cout << CURRENT_ITERATION;
            return eval(a, m, target);
        } //consideriamo la funzione tra "a" e il punto medio tra "a" e "b"
        else
        {
            cap--;
            std::cout << CURRENT_ITERATION;
            return eval(m, b, target);
        } //consideriamo la funzione tra il punto medio tra "a" e "b" e "b"
    }
    else
    {
        std::cout << CURRENT_ITERATION;
        std::cout << "Iterazione interrotta, valore approssimato" << std::endl;
        return fm;
    }
}

double func(double x)
{
    return FUNC;
}
