#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Pessoa
{
    public:
        string Nome;
        int Idade;
    
        Pessoa();
        Pessoa(string Nome, int Idade);

        string PegarNome();
        void DeclararNome(string Nome);

        int PegarIdade();
        void DeclararIdade(int Idade);

};

#endif