//
// Created by jeje on 04/10/22.
//

#include "Pessoa_fis.hpp"

//Construtores:
Pessoa_fis::Pessoa_fis()
{
    this->prox = NULL;
    this-> cpf = " ";
    this-> nome = " ";
}

Pessoa_fis::Pessoa_fis(string cpf,string nome) //Declarando um Node da classe Node que preenche o índice 1 da carrinho encadeada com o argumento v e aponta o apontador para NULL...
{
    this->prox = NULL;
    this-> cpf = cpf;
    this-> nome = nome;
}


//Getters & Setters:

void Pessoa_fis::Declarar_prox(Pessoa_fis* p)
{
    prox = p;
}
Pessoa_fis* Pessoa_fis::PegarProx() //Declarando um método da classe node para dar return no endereço de memória do ponteiro prox()
{
    return this->prox;
}



string Pessoa_fis::PegarNome() //Declarando um método da classe node para pegar um valor que esteja dentro da carrinho encadeada
{
    return this->nome;
}
string Pessoa_fis::DeclararNome(string nome) //Declarando um método da classe node para pegar um valor que esteja dentro da carrinho encadeada
{
    return this -> nome = nome;
}


string Pessoa_fis::PegarCpf() //Declarando um método da classe node para pegar um valor que esteja dentro da carrinho encadeada
{
    return this->cpf;
}
string Pessoa_fis::DeclararCpf(string cpf) //Declarando um método da classe node para pegar um valor que esteja dentro da carrinho encadeada
{
    return this -> cpf = cpf;
}





