//
//  Enunciado:
//

#include "Fila_fis.hpp"

using namespace std;
int tratando_cpf(string cpf)
{
    //Funçao recebe um cpf e retorna se o mesmo tem 11 digitos bem como se sao todos numeros
    int tamanho = cpf.length();

   
    if(tamanho!=11)
    {
        return 0;
    }
    else
    {
        for(int i=0;i<tamanho;i++)
        {

            if(((cpf.find("a"))!=std::string::npos)||((cpf.find("b"))!=std::string::npos)||((cpf.find("c"))!=std::string::npos)||((cpf.find("d"))!=std::string::npos)||((cpf.find("e"))!=std::string::npos)||((cpf.find("f"))!=std::string::npos)||((cpf.find("g"))!=std::string::npos)||((cpf.find("h"))!=std::string::npos)||((cpf.find("i"))!=std::string::npos)||((cpf.find("j"))!=std::string::npos)||((cpf.find("k"))!=std::string::npos)||((cpf.find("l"))!=std::string::npos)||((cpf.find("m"))!=std::string::npos)||((cpf.find("n"))!=std::string::npos)||((cpf.find("o"))!=std::string::npos)||((cpf.find("p"))!=std::string::npos)||((cpf.find("q"))!=std::string::npos)||((cpf.find("r"))!=std::string::npos)||((cpf.find("s"))!=std::string::npos)||((cpf.find("t"))!=std::string::npos)||((cpf.find("u"))!=std::string::npos)||((cpf.find("v"))!=std::string::npos)||((cpf.find("w"))!=std::string::npos)||((cpf.find("x"))!=std::string::npos)||((cpf.find("y"))!=std::string::npos)||((cpf.find("z"))!=std::string::npos))
                return 0;
            else if(((cpf.find("A"))!=std::string::npos)||((cpf.find("B"))!=std::string::npos)||((cpf.find("C"))!=std::string::npos)||((cpf.find("C"))!=std::string::npos)||((cpf.find("E"))!=std::string::npos)||((cpf.find("F"))!=std::string::npos)||((cpf.find("G"))!=std::string::npos)||((cpf.find("H"))!=std::string::npos)||((cpf.find("I"))!=std::string::npos)||((cpf.find("J"))!=std::string::npos)||((cpf.find("K"))!=std::string::npos)||((cpf.find("L"))!=std::string::npos)||((cpf.find("M"))!=std::string::npos)||((cpf.find("N"))!=std::string::npos)||((cpf.find("O"))!=std::string::npos)||((cpf.find("P"))!=std::string::npos)||((cpf.find("Q"))!=std::string::npos)||((cpf.find("R"))!=std::string::npos)||((cpf.find("S"))!=std::string::npos)||((cpf.find("T"))!=std::string::npos)||((cpf.find("U"))!=std::string::npos)||((cpf.find("V"))!=std::string::npos)||((cpf.find("W"))!=std::string::npos)||((cpf.find("X"))!=std::string::npos)||((cpf.find("Y"))!=std::string::npos)||((cpf.find("Z"))!=std::string::npos))
                return 0;
            
            else if(((cpf.find("@"))!=std::string::npos)||((cpf.find("!"))!=std::string::npos)||((cpf.find("#"))!=std::string::npos)||((cpf.find("$"))!=std::string::npos)||((cpf.find("%"))!=std::string::npos)||((cpf.find("¨"))!=std::string::npos)||((cpf.find("&"))!=std::string::npos)||((cpf.find("*"))!=std::string::npos)||((cpf.find("("))!=std::string::npos)||((cpf.find(")"))!=std::string::npos)||((cpf.find("-"))!=std::string::npos)||((cpf.find("="))!=std::string::npos)||((cpf.find("+"))!=std::string::npos)||((cpf.find("["))!=std::string::npos)||((cpf.find("]"))!=std::string::npos)||((cpf.find("}"))!=std::string::npos)||((cpf.find("}"))!=std::string::npos)||((cpf.find("ª"))!=std::string::npos)||((cpf.find("º"))!=std::string::npos)||((cpf.find("°"))!=std::string::npos)||((cpf.find("/"))!=std::string::npos)||((cpf.find("|"))!=std::string::npos)||((cpf.find("?"))!=std::string::npos)||((cpf.find(":"))!=std::string::npos)||((cpf.find(";"))!=std::string::npos)||((cpf.find(">"))!=std::string::npos))
                return 0;
            
            else if(((cpf.find("<"))!=std::string::npos)||((cpf.find(","))!=std::string::npos)||((cpf.find("."))!=std::string::npos)||((cpf.find("~"))!=std::string::npos)||((cpf.find("´"))!=std::string::npos)||((cpf.find("`"))!=std::string::npos)||((cpf.find("£"))!=std::string::npos)||((cpf.find("¢"))!=std::string::npos)||((cpf.find("¬"))!=std::string::npos)||((cpf.find("_"))!=std::string::npos)||((cpf.find("'"))!=std::string::npos)||((cpf.find("§"))!=std::string::npos)||((cpf.find("·"))!=std::string::npos)||((cpf.find("æ"))!=std::string::npos)||((cpf.find("“"))!=std::string::npos)||((cpf.find("©"))!=std::string::npos)||((cpf.find("ð"))!=std::string::npos)||((cpf.find("°"))!=std::string::npos)||((cpf.find("đ"))!=std::string::npos)||((cpf.find("ŋ"))!=std::string::npos)||((cpf.find("ħ"))!=std::string::npos)||((cpf.find("→"))!=std::string::npos)||((cpf.find("ˀ"))!=std::string::npos)||((cpf.find("ĸ"))!=std::string::npos)||((cpf.find("ł"))!=std::string::npos)||((cpf.find("µ"))!=std::string::npos))
                return 0;
            
            else if(((cpf.find("”"))!=std::string::npos)||((cpf.find("ø"))!=std::string::npos)||((cpf.find("þ"))!=std::string::npos)||((cpf.find("®"))!=std::string::npos)||((cpf.find("ß"))!=std::string::npos)||((cpf.find("ŧ"))!=std::string::npos)||((cpf.find("↓"))!=std::string::npos)||((cpf.find("„"))!=std::string::npos)||((cpf.find("»"))!=std::string::npos)||((cpf.find("←"))!=std::string::npos)||((cpf.find("«"))!=std::string::npos)||((cpf.find("Æ"))!=std::string::npos)||((cpf.find("Ð"))!=std::string::npos)||((cpf.find("Ŋ"))!=std::string::npos)||((cpf.find("Ħ"))!=std::string::npos)||((cpf.find("Ł"))!=std::string::npos)||((cpf.find("Ø"))!=std::string::npos)||((cpf.find("Þ"))!=std::string::npos)||((cpf.find("ẞ"))!=std::string::npos)||((cpf.find("Ŧ"))!=std::string::npos))
                return 0;
            else
            {
                if((((cpf.find("0"))== std::string::npos) && ((cpf.find("1"))== std::string::npos) && ((cpf.find("2"))== std::string::npos) && ((cpf.find("3"))== std::string::npos) && ((cpf.find("4"))== std::string::npos) && ((cpf.find("5"))== std::string::npos) && ((cpf.find("6"))== std::string::npos) && ((cpf.find("7"))== std::string::npos) && ((cpf.find("8"))== std::string::npos) && ((cpf.find("9"))== std::string::npos)))
                    return 0;
                else if(cpf.find(" ")!=std::string::npos)
                    return 0;
                else 
                    return 1;
            }
        }
    }
    return 1;
}



using namespace std;
int main(int argc, char *argv[])
{
    char end = '\n';
    Fila_fis* fila_comum = new Fila_fis();
    Fila_fis* fila_de_prioridade = new Fila_fis();

    int escolha = 1;

        string cpf;
        string nome;
        int prioridade=6;

    while(escolha!=0)
    {

        cout<<"\n\n«≃«≃«≃«≃«≃«≃«≃«≃«≃«≃«≃«≃«≃ŧMenuŧ≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»";
        cout<<"\n\n1 -> Inserir pessoa na fila:";
        cout<<"\n2 -> Mostrar todos da fila:";
        cout<<"\n3 -> Buscar uma pessoa na fila:";
        cout<<"\n4 -> Remover uma pessoa da fila:";
        cout<<"\n5 -> Verificar se a fila está vazia:";
        cout<<"\n                        0-> Sair\n\n";
        cout<<"««≃«≃«≃«≃«≃«≃«≃«≃«≃«≃«≃«≃«≃«≃ð≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»»\n O que deseja:"<<end;
        
        int erro = 1;
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

        switch(escolha)
        {

            case(1):
            {
                cout<<"cpf: ";
                cin.ignore();
                getline(cin,cpf);

                while(tratando_cpf(cpf)==0)
                {
                    cout<<"O cpf inserido e invalido: \n";
                    cout<<"Insira aqui um cpf diferente: ";
                    getline(cin,cpf);

                    if(tratando_cpf(cpf)==1)
                        break;
                }

                cout<<"nome: ";
                getline(cin,nome);
                
                do
                {
                    cout<<"Você se identifica como:"<<end;
                    cout<<"1 -> Idoso(idade igual ou superior à 60 anos de idade)."<<end;
                    cout<<"2 -> Gravida."<<end;
                    cout<<"3 -> PCD(Pessoa com deficiência)."<<end;
                    cout<<"4 -> Acompanhado de criança de colo."<<end;
                    cout<<"5 -> Nenhuma das alternativas acima."<<end;
                    cin>>prioridade;

                    if((prioridade>0)&&(prioridade<=4))
                        fila_de_prioridade->inserir_final(cpf, nome);
                    
                    else if(prioridade == 5)
                        fila_comum->inserir_final(cpf, nome);
                    
                    else
                        cout<<"Não foi possível realizar o cadastro, pois um número imprevisto foi inserido";

                }while((prioridade<1) || (prioridade>5));

                //func2: Consultar um produto em específico do carrinho;
            }break;

            case(2):
            {
                cout<<"Fila:"<<end;
                cout<<"Pessoas com prioridade:"<<end;
                fila_de_prioridade->mostrar_todos();

                cout<<"Fila de pessoas sem prioridade:"<<end;
                fila_comum->mostrar_todos();

            }break;

            case(3):
            {
                cout<<"cpf: ";
                cin.ignore();
                getline(cin,cpf);
                cout<<"Lista prioritária"<<end;
                fila_de_prioridade->Buscar_Pessoa_fis(cpf);
                cout<<"Lista sem prioridade:"<<end;
                fila_comum->Buscar_Pessoa_fis(cpf);
                //Função para associar ou linkar dois elementos de uma fila
            }break;

            case(4):
            {
                if(fila_de_prioridade->vazia())    
                    fila_comum->remover();

                else
                    fila_de_prioridade->remover();
            }break;

            case(5):
            {
                if((fila_de_prioridade->vazia())&&(fila_comum->vazia()))    
                    cout<<"Ambas as filas estão vazias!";

                else if((fila_de_prioridade->vazia())&&(!(fila_comum->vazia())))
                    cout<<"Somente a fila de prioridade está vazia";

                else if((!(fila_de_prioridade->vazia()))&&(fila_comum->vazia()))
                    cout<<"Somente a fila de sem prioridade está vazia";

                else
                    cout<<"Nenhuma das filas está vazia!!";
            }break;

            default:
                break;
        }
    }

    return 0;
}
