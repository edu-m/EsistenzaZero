#include <utility>
#define CURRENT_ITERATION "x= "<<m<<", "<<"f(x)="<<fm<<std::endl

double difazio(double, double, double);
double func(double);


double difazio(double a, double b, double target)
{
    static int cap=50;
    double m=(a+b)/2;
    double fm=func(m); 
    if(cap>0)
    {
        if(fm==target)     {std::cout<<CURRENT_ITERATION; return fm;}                         //se è uguale al target siamo fortunati, non c'è bisogno di procedere
        else if(fm>target) {cap--; std::cout<<CURRENT_ITERATION; return difazio(a,m,target);}       //consideriamo la funzione tra "a" e il punto medio tra "a" e "b"
        else               {cap--; std::cout<<CURRENT_ITERATION; return difazio(m,b,target);}      //consideriamo la funzione tra il punto medio tra "a" e "b" e "b"
    }
    else
    {
        std::cout<<CURRENT_ITERATION;
        //std::cout<<"Iterazione interrotta, valore approssimato"<<std::endl;  
        return fm;
    }
}

double func(double x)
{
    return (x*x)-3; //inserire qui la legge della funzione
}
