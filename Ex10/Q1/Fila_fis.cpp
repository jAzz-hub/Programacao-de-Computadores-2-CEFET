//
// Created by jeje on 04/10/22.
//

// compile com: g++ Fila_fis.hpp Fila_fis.cpp Fila_jur.hpp Fila_jur.cpp Pessoa_fis.hpp Pessoa_fis.cpp Pessoa_jur.hpp Pessoa_jur.cpp Pessoa.hpp Pessoa.hpp main.cpp -o ex

#include "Fila_fis.hpp"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
//Construtores:
Fila_fis::Fila_fis()
{
    
    Pessoa_fis* ponta = new Pessoa_fis(" ", " ");
    dianteira = ponta;
}

Fila_fis::Fila_fis(string cpf,string nome)//"/Declarando método da classe nó que cria a frente da carrinho com um objeto do tipo Node na frente e um objeto na parte de trás que também tem o mesmo valor e da frente.
{
    Pessoa_fis* ponta = new Pessoa_fis(cpf,nome);
    dianteira = ponta;
    n_pessoas +=1;
}


//Outros Métodos:
bool Fila_fis::vazia() //verifica se a carrinho está vazia
{
    return (ponta == NULL);
}



//Insere elemento no final do carrinho:
void Fila_fis::inserir_final(string cpf, string nome) {
    Pessoa_fis *novo_no = new Pessoa_fis(cpf, nome);
    if (vazia()) {
        ponta = novo_no;
        dianteira = novo_no;
    } else {
        dianteira->Declarar_prox(novo_no);
        dianteira = novo_no;
    }
    cout << endl;
    cout << endl;
    cout << "CADASTRO REALIZADO COM SUCESSO!!";
    mostrar_pessoas_na_frente(nome);
    cout << endl;
    cout << endl;
    cout << endl;
    this->n_pessoas+=1;

}

void Fila_fis::mostrar_todos()
{
    Pessoa_fis* ponteiro = ponta;

    if(vazia())
    {
        cout<<"A fila vazia!"<<endl<<endl;
    }
    else
    {
        while(ponteiro)
        {
            if(ponteiro->PegarCpf()!=" ")
            {
                //Mostrar todos os atributos:
                cout<<"cpf: "<<ponteiro->PegarCpf()<<endl;
                cout<<"nome: "<<ponteiro->PegarNome()<<endl;
                cout<<endl;
                cout<<endl;

            }
            ponteiro = ponteiro->PegarProx();
        }
    }
}


void Fila_fis::Buscar_Pessoa_fis(string cpf_escolhido)
{
    Pessoa_fis* ponteiro = ponta;
    int token_de_busca = 0;

    if(vazia())
    {
        cout<<"Não há ninguém nesta fila!";
    }
    else
    {
        while(ponteiro)
        {
            if(ponteiro->PegarCpf()==cpf_escolhido)
            {
                //Mostrar todos os atributos:
                cout<<"O cpf inserido deve pagar um imposto de :"<<endl;
                token_de_busca = 1;
                break;
            }
            else
            {
                ponteiro = ponteiro->PegarProx();
                token_de_busca = 0;
            }
        }
        if(token_de_busca == 1)
        {
            token_de_busca=1;
        }
        else
        {
            cout<<"Não foi possível encontrar esta pessoa na fila!!";
        }
    }
}


int Fila_fis::size()
{
  if(vazia())
  {
    return 0;
  }
  Pessoa_fis* p = ponta;
  int tamanho = 0;

  while(p)
  {
    p = p->PegarProx();
    tamanho+=1;
  }
  return tamanho;
}

void Fila_fis::remover()
{
  if(!vazia())
  {
      cout<<ponta->PegarNome()<<" saiu da fila\n";
      ponta = ponta->PegarProx();
      n_pessoas-=1;
      cout<<"\nAgora existem "<<n_pessoas<<" na fila\n\n";
      return;
  }

  else
  {
    cout<<"Esta fila está vazia"<<endl<<endl;
  }

}

void Fila_fis::mostrar_pessoas_na_frente(string nome)
{
    cout<<"\n\n Existem "<<this->n_pessoas<<" pessoas na frente de\n\n"<<nome;
}