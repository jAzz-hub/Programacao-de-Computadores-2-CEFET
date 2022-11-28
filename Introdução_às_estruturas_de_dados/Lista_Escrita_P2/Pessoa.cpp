
#include "Pessoa.hpp"

Pessoa::Pessoa()
{
    
}

Pessoa::Pessoa(string Nome, int Idade)
{
    this-> Nome = Nome;
    this-> Idade = Idade;
}


void Pessoa::DeclararNome(string Nome)
{
    this->Nome = Nome;
}

string Pessoa::PegarNome()
{
    return this->Nome;
}

void Pessoa::DeclararIdade(int Idade)
{
    this->Idade = Idade;
}

int Pessoa::PegarIdade()
{
    return this->Idade;
}