
double difazio(double, double, int);
double func(double);


double difazio(double a, double b, int c)
{
    double m=(a+b)/2;
    double fx=func(m);
    if(a>b)
    {
        if(c>=0)
        {
            if(fx==0)     {std::cout<<fx<<std::endl; return fx;}                 //se fa 0 siamo fortunati, non c'è bisogno di procedere
            else if(fx>0) {std::cout<<fx<<std::endl; return difazio(a,m,--c);}  //consideriamo la funzione tra "a" e il punto medio tra "a" e "b"
            else          {std::cout<<fx<<std::endl; return difazio(m,b,--c);} //consideriamo la funzione tra il punto medio tra "a" e "b" e "b"
        }
        else return fx;
    }
    else
    {
        if(c>=0)
        {
            if(fx==0)     {std::cout<<fx<<std::endl; return fx;}                 //se fa 0 siamo fortunati, non c'è bisogno di procedere
            else if(fx>0) {std::cout<<fx<<std::endl; return difazio(m,b,--c);}  //consideriamo la funzione tra "a" e il punto medio tra "a" e "b"
            else          {std::cout<<fx<<std::endl; return difazio(a,m,--c);} //consideriamo la funzione tra il punto medio tra "a" e "b" e "b"
        }
        else return fx;
    }
}

double func(double x)
{
    return (x*x)-3; //inserire qui la legge della funzione
}
