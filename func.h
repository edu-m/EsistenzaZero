#include <utility>
#define LEGGE (x*x)-596

double difazio(double, double, double);
double func(double);


double difazio(double a, double b, double temp)
{
    if(b<a) std::swap(b, a);
    double m=(a+b)/2;
    double fm=func(m); 
    if(fm!=temp)
    {
        if(fm==0)     {std::cout<<fm<<std::endl; return fm;}                    //se fa 0 siamo fortunati, non c'è bisogno di procedere
        else if(fm<0) {std::cout<<fm<<std::endl; return difazio(a,m,fm);}  //consideriamo la funzione tra "a" e il punto medio tra "a" e "b"
        else          {std::cout<<fm<<std::endl; return difazio(m,b,fm);} //consideriamo la funzione tra il punto medio tra "a" e "b" e "b"
    }
    else return fm;
}

double func(double x)
{
    return LEGGE; //inserire qui la legge della funzione
}
