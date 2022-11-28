//
// Created by jeje on 04/10/22.
//

// compile com: g++ Pilha_livros.hpp Pilha_livros.cpp Pilha_jur.hpp Pilha_jur.cpp Pilha_livros.hpp Pilha_livros.cpp Pessoa_jur.hpp Pessoa_jur.cpp Pessoa.hpp Pessoa.hpp main.cpp -o ex

#include "Pilha_livros.hpp"
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;
//Construtores:
Pilha_livros::Pilha_livros()
{
    
    Livro* ponta = new Livro(" ", " ");
    dianteira = ponta;
}

Pilha_livros::Pilha_livros(string ISBN,string nome)//"/Declarando método da classe nó que cria a frente da carrinho com um objeto do tipo Node na frente e um objeto na parte de trás que também tem o mesmo valor e da frente.
{
    Livro* ponta = new Livro(ISBN,nome);
    dianteira = ponta;
    n_livros +=1;
}


//Outros Métodos:
bool Pilha_livros::vazia() //verifica se a carrinho está vazia
{
    return (ponta == NULL);
}



//Insere elemento no final do carrinho:
void Pilha_livros::inserir_final(string ISBN, string nome) {
    Livro *novo_no = new Livro(ISBN, nome);
    if (vazia()) {
        ponta = novo_no;
        dianteira = novo_no;
    } else {
        novo_no->Declarar_ant(dianteira);
        dianteira->Declarar_prox(novo_no);
        dianteira = novo_no;
    }
    cout << endl;
    cout << endl;
    cout << "CADASTRO REALIZADO COM SUCESSO!!";
    mostrar_livros_na_frente(nome);
    cout << endl;
    cout << endl;
    cout << endl;
    this->n_livros+=1;
}

void Pilha_livros::mostrar_todos()
{
    Livro* ponteiro = ponta;
    vector <string> vecNomes, vecISBN;

    if(vazia())
    {
        cout<<"A Pilha vazia!"<<endl<<endl;
    }
    else
    {
        while(ponteiro)
        {
            if(ponteiro->PegarISBN()!=" ")
            {
                vecNomes.push_back(ponteiro->PegarNome());
                vecISBN.push_back(ponteiro->PegarISBN());
                //Mostrar todos os atributos:
            }
            ponteiro = ponteiro->PegarProx();
        }
        reverse(vecNomes.begin(),vecNomes.end());
        reverse(vecISBN.begin(),vecISBN.end());
        
        for(int i=0;i<vecNomes.size();i++)
        {
            
            cout<<"+-+-+-+-+-+-+-+-+-+-+"<<"Livro "<<vecNomes.size()-i<<"-+-+-+-+-+-+-+-+-+-\n";
            cout<<"Nome:"<<vecNomes[i]<<"\n";
            cout<<"ISBN:"<<vecISBN[i]<<"\n";
            cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\n";
        }
    }
}


void Pilha_livros::Buscar_livro(string ISBN_escolhido)
{
    Livro* ponteiro = ponta;
    int token_de_busca = 0;

    if(vazia())
    {
        cout<<"Não há ninguém nesta Pilha!";
    }
    else
    {
        while(ponteiro)
        {
            if(ponteiro->PegarISBN()==ISBN_escolhido)
            {
                //Mostrar todos os atributos:
                cout<<"O ISBN inserido é um livro com o nome :"<<ponteiro->PegarNome()<<endl;
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
            cout<<"Não foi possível encontrar esta pessoa na Pilha!!";
        }
    }
}


int Pilha_livros::size()
{
  if(vazia())
  {
    return 0;
  }
  Livro* p = ponta;
  int tamanho = 0;

  while(p)
  {
    p = p->PegarProx();
    tamanho+=1;
  }
  return tamanho;
}

void Pilha_livros::remover()
{
    if((!vazia()) && n_livros>1)
    {
        
        cout<<"O livro: "<<dianteira->PegarNome()<<", com ISBN: "<<dianteira->PegarISBN()<<"foi excluído!";
        dianteira = dianteira->PegarAnt();
        dianteira->Declarar_prox(NULL);
        n_livros-=1;
        cout<<"Agora há "<<n_livros<<" livro(s) na pilha\n\n";
    }

    else if((!vazia()) && n_livros==1)
    {
        cout<<dianteira->PegarNome()<<"com ISBN: "<<dianteira->PegarISBN()<<" foi excluído!";
        dianteira = NULL;
        n_livros-=1;
        cout<<"\nAgora há "<<n_livros<<" livro(s) na pilha\n\n";
    }

    else
    {
        cout<<"Esta Pilha está vazia"<<endl<<endl;
    }

}

void Pilha_livros::mostrar_livros_na_frente(string nome)
{
    cout<<"\n\n Existem "<<this->n_livros<<" livros na encima dele\n\n"<<nome;
}


void Pilha_livros::mostrar_livro_do_topo()
{
    if(!vazia())
    {
        cout<<"ISBN: "<<dianteira->PegarISBN()<<"\n";
        cout<<"Nome: "<<dianteira->PegarNome()<<"\n\n";
    }
    else
    {
        cout<<"Esta Pilha está vazia"<<endl<<endl;
    }
}