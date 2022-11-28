
//
// Created by jeje on 04/10/22.
//

#include "Livro.hpp"

//Construtores:
Livro::Livro()
{
    this-> prox = NULL;
    this-> ant = NULL;
    this-> ISBN = " ";
    this-> nome = " ";
}

Livro::Livro(string ISBN,string nome) //Declarando um Node da classe Node que preenche o índice 1 da carrinho encadeada com o argumento v e aponta o apontador para NULL...
{
    this-> prox = NULL;
    this-> ant = NULL;
    this-> ISBN = ISBN;
    this-> nome = nome;
}


//Getters & Setters:

void Livro::Declarar_prox(Livro* p)
{
    prox = p;
}
Livro* Livro::PegarProx() //Declarando um método da classe node para dar return no endereço de memória do ponteiro prox()
{
    return this->prox;
}

void Livro::Declarar_ant(Livro* p)
{
    ant = p;
}
Livro* Livro::PegarAnt() //Declarando um método da classe node para dar return no endereço de memória do ponteiro ant()
{
    return this->ant;
}



string Livro::PegarNome() //Declarando um método da classe node para pegar um valor que esteja dentro da carrinho encadeada
{
    return this->nome;
}
string Livro::DeclararNome(string nome) //Declarando um método da classe node para pegar um valor que esteja dentro da carrinho encadeada
{
    return this -> nome = nome;
}


string Livro::PegarISBN() //Declarando um método da classe node para pegar um valor que esteja dentro da carrinho encadeada
{
    return this->ISBN;
}
string Livro::DeclararISBN(string ISBN) //Declarando um método da classe node para pegar um valor que esteja dentro da carrinho encadeada
{
    return this -> ISBN = ISBN;
}





