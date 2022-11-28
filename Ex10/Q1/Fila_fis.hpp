//
// Created by jeje on 04/10/22.
//

#ifndef F_PROVA_Fila_FIS_HPP
#define F_PROVA_Fila_FIS_HPP

#include "Pessoa_fis.hpp"

class Fila_fis
{
    private:
        Pessoa_fis *ponta;
        Pessoa_fis *dianteira;
        int n_pessoas = 0;

    public:
        Fila_fis();
        Fila_fis(string cpf, string nome);

        bool vazia();
        void inserir_final(string cpf, string nome);
        void mostrar_todos();
        void Buscar_Pessoa_fis(string cpf_escolhido);
        void mostrar_pessoas_na_frente(string nome);
        int size();
        void remover();
};

#endif //F_PROVA_Fila_FIS_HPP

