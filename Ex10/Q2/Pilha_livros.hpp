//
// Created by jeje on 04/10/22.
//

#ifndef F_PROVA_Pilha_livros_HPP
#define F_PROVA_Pilha_livros_HPP

#include "Livro.hpp"

class Pilha_livros
{
    private:
        Livro *ponta;
        Livro *dianteira;
        int n_livros = 0;

    public:
        Pilha_livros();
        Pilha_livros(string ISBN, string nome);

        bool vazia();
        void inserir_final(string ISBN, string nome);
        void mostrar_todos();
        void Buscar_livro(string ISBN_escolhido);
        void mostrar_livros_na_frente(string nome);
        int size();
        void remover();
        void mostrar_livro_do_topo();
};

#endif //F_PROVA_Pilha_livros_HPP

