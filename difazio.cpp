#include <iostream>
#include "func.h"

main()
{
    double a,b;
    int cont;
    do{
        std::cin>>a;
        std::cin>>b;
        std::cin>>cont;
        //std::cout<<"f(a)= "<<func(a)<<std::endl;
        //std::cout<<"f(b)= "<<func(b)<<std::endl;
    }while(func(a)*func(b)>0 || a==b || cont<=0);
    
    difazio(a,b,cont);
    return 0;
}