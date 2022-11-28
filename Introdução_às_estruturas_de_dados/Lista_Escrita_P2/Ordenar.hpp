#ifndef __ORDENAR_HPP
#define __ORDENAR_HPP

#include "Pessoa.hpp"

class Ordenar 
{
    public:
    
        bool operator()(Pessoa& Pessoa1, Pessoa& Pessoa2)
        {
            return Pessoa1.PegarIdade() < Pessoa2.PegarIdade();
        }

};

#endif