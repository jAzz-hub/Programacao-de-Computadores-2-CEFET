//
// Created by jeje on 04/10/22.
//

#ifndef F_PROVA_Pessoa_FIS_HPP
#define F_PROVA_Pessoa_FIS_HPP

#include <cstring>
#include <iostream>
#include <string>

using namespace std;
class Pessoa_fis
{
    private:
        Pessoa_fis* prox;
        string cpf;
        string nome;
        

    public:
        //Criando um node que exige uma variável v:
        Pessoa_fis(string cpf, string nome);
        Pessoa_fis();

        Pessoa_fis* PegarProx();
        void Declarar_prox(Pessoa_fis* p);

        string PegarNome();
        string DeclararNome(string nome);
        
        string PegarCpf();
        string DeclararCpf(string cpf);
        

};

#endif //F_PROVA_Pessoa_FIS_HPP
