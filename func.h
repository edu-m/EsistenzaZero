#include <utility>

double difazio(double, double, int);
double func(double);


double difazio(double a, double b, int c)
{
    if(b<a) std::swap(b, a);
    double m=(a+b)/2;
    double fm=func(m); 
    if(c>=0)
    {
        if(fm==0)     {std::cout<<fm<<std::endl; return fm;}                 //se fa 0 siamo fortunati, non c'è bisogno di procedere
        else if(fm<0) {std::cout<<fm<<std::endl; return difazio(a,m,--c);}  //consideriamo la funzione tra "a" e il punto medio tra "a" e "b"
        else          {std::cout<<fm<<std::endl; return difazio(m,b,--c);} //consideriamo la funzione tra il punto medio tra "a" e "b" e "b"
    }
    else return fm;
}

double func(double x)
{
    return (x*x)-3; //inserire qui la legge della funzione
}
