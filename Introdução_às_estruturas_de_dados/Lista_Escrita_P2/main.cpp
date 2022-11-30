//
// Enunciado: 
//  Considerando que uma pessoa possui como atributos nome e idade, implemente
//  um programa usando orientação a objetos e que controle uma fila de banco dando
//  prioridade para as pessoas mais idosas.
//  
//


// a-Cadastrar um objeto Pessoa Idosa e adicioná-lo na fila.
// b- Mostrar todos os objetos na fila.
// c-Excluir um objeto da fila.
// d - Verificar se a fila está vazia.

#include "Pessoa.hpp"
#include "Ordenar.hpp"

#include <queue>
#include<vector>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{


    priority_queue<Pessoa, vector<Pessoa>, Ordenar> fila_prioritaria;

    char end = '\n';

    string nome;
    int idade = -1, escolha=1, erro=0;

    while(escolha!=0)
    {

        cout<<"\n\n«≃«≃«≃«≃«≃«≃«≃«≃«≃«≃«≃«≃«≃ŧMenuŧ≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»";
        cout<<"\n\n1 -> Inserir pessoa na fila:";
        cout<<"\n2 -> Mostrar todos da fila:";
        cout<<"\n3 -> Remover uma pessoa da fila:";
        cout<<"\n4 -> Verificar se a fila está vazia:";
        cout<<"\n                        0-> Sair\n\n";
        cout<<"««≃«≃«≃«≃«≃«≃«≃«≃«≃«≃«≃«≃«≃«≃ð≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»»\n O que deseja:"<<end;

        cin>>escolha;
        if(cin.fail())
        {
            do
                {
                    cin>>escolha;
            
                    if(cin.fail())
                    {
                        cout<<"Digite um escolha válida!"<<end;
                        erro=1;
                        cin.clear();
                        cin.ignore(80,'\n');
                    }
                    else
                    {
                        erro=0;
                        break;
                        cout<<end;
                    }

                }while(erro=1);
        }

        switch(escolha){

            case(1):{
                cin.ignore();
                cout<<"nome: "<<end;
                getline(cin,nome);
                
                do
                {
                    cout<<"idade: ";
                    cin>>idade;
                    if(cin.fail())
                    {
                        cout<<"Idade inválida inseria, favor reinserir a idade!"<<end;
                        idade = 0;
                        cin.clear();
                        cin.ignore(80,'\n');
                    }
                    else
                    {
                        idade = idade;
                        break;
                    }
                }while(idade<=0);

                Pessoa Pessoa_aux = Pessoa(nome,idade);

                fila_prioritaria.push(Pessoa_aux);
            }break;

            case(2):{
                int cont=0;
                
                priority_queue<Pessoa, vector<Pessoa>, Ordenar> prioritaria_aux = fila_prioritaria;
                while(!(prioritaria_aux.empty()))
                {
                    cont++;
                    Pessoa ultimo_da_fila = prioritaria_aux.top();
                    cout<<cont<<"º da fila"<<end;
                    cout<<"Nome: "<<ultimo_da_fila.PegarNome()<<end;
                    cout<<"Idade: "<<ultimo_da_fila.PegarIdade()<<end;
                    prioritaria_aux.pop();
                    cout<<end;
                }
                if(fila_prioritaria.empty())
                {
                    cout<<"A fila está vazia";
                }
                cout<<'\n';
            }break;

            case(3):{
                if(!(fila_prioritaria.empty()))
                {
                    cout<<fila_prioritaria.top().Nome<<" acabou de ser atendido, portanto saiu da fila"<<end;
                    fila_prioritaria.pop();
                    cout<<'\n';
                }
                else
                {
                    cout<<"A fila está vazia... Não é possível remover";
                }
            }break;

            case(4):{
                if(!(fila_prioritaria.empty()))
                {
                    cout<<"A fila não está vazia!";
                }
                else
                {
                    cout<<"A fila está vazia!";
                }
                cout<<end;
            }break;

            default:
                break;
        }
    }

    return 0;
}
