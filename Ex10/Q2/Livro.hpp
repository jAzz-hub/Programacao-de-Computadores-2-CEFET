//
// Created by jeje on 04/10/22.
//

#ifndef Livro_HPP
#define Livro_HPP

#include <cstring>
#include <iostream>
#include <string>

using namespace std;
class Livro
{
    private:
        Livro* prox;
        Livro* ant;
        string ISBN;
        string nome;
        

    public:
        //Criando um node que exige uma variável v:
        Livro(string ISBN, string nome);
        Livro();

        Livro* PegarProx();
        void Declarar_prox(Livro* p);

        Livro* PegarAnt();
        void Declarar_ant(Livro* p);

        string PegarNome();
        string DeclararNome(string nome);
        
        string PegarISBN();
        string DeclararISBN(string ISBN);
        

};

#endif //Livro_HPP
