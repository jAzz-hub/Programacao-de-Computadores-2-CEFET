//
// Enunciado:
//

#include "Pilha_livros.hpp"

using namespace std;
int tratando_ISBN(string ISBN)
{
    //Funçao recebe um ISBN e retorna se o mesmo tem 11 digitos bem como se sao todos numeros
    int tamanho = ISBN.length();

   
    if(tamanho!=11)
    {
        return 0;
    }
    else
    {
        for(int i=0;i<tamanho;i++)
        {

            if(((ISBN.find("a"))!=std::string::npos)||((ISBN.find("b"))!=std::string::npos)||((ISBN.find("c"))!=std::string::npos)||((ISBN.find("d"))!=std::string::npos)||((ISBN.find("e"))!=std::string::npos)||((ISBN.find("f"))!=std::string::npos)||((ISBN.find("g"))!=std::string::npos)||((ISBN.find("h"))!=std::string::npos)||((ISBN.find("i"))!=std::string::npos)||((ISBN.find("j"))!=std::string::npos)||((ISBN.find("k"))!=std::string::npos)||((ISBN.find("l"))!=std::string::npos)||((ISBN.find("m"))!=std::string::npos)||((ISBN.find("n"))!=std::string::npos)||((ISBN.find("o"))!=std::string::npos)||((ISBN.find("p"))!=std::string::npos)||((ISBN.find("q"))!=std::string::npos)||((ISBN.find("r"))!=std::string::npos)||((ISBN.find("s"))!=std::string::npos)||((ISBN.find("t"))!=std::string::npos)||((ISBN.find("u"))!=std::string::npos)||((ISBN.find("v"))!=std::string::npos)||((ISBN.find("w"))!=std::string::npos)||((ISBN.find("x"))!=std::string::npos)||((ISBN.find("y"))!=std::string::npos)||((ISBN.find("z"))!=std::string::npos))
                return 0;
            else if(((ISBN.find("A"))!=std::string::npos)||((ISBN.find("B"))!=std::string::npos)||((ISBN.find("C"))!=std::string::npos)||((ISBN.find("C"))!=std::string::npos)||((ISBN.find("E"))!=std::string::npos)||((ISBN.find("F"))!=std::string::npos)||((ISBN.find("G"))!=std::string::npos)||((ISBN.find("H"))!=std::string::npos)||((ISBN.find("I"))!=std::string::npos)||((ISBN.find("J"))!=std::string::npos)||((ISBN.find("K"))!=std::string::npos)||((ISBN.find("L"))!=std::string::npos)||((ISBN.find("M"))!=std::string::npos)||((ISBN.find("N"))!=std::string::npos)||((ISBN.find("O"))!=std::string::npos)||((ISBN.find("P"))!=std::string::npos)||((ISBN.find("Q"))!=std::string::npos)||((ISBN.find("R"))!=std::string::npos)||((ISBN.find("S"))!=std::string::npos)||((ISBN.find("T"))!=std::string::npos)||((ISBN.find("U"))!=std::string::npos)||((ISBN.find("V"))!=std::string::npos)||((ISBN.find("W"))!=std::string::npos)||((ISBN.find("X"))!=std::string::npos)||((ISBN.find("Y"))!=std::string::npos)||((ISBN.find("Z"))!=std::string::npos))
                return 0;
            
            else if(((ISBN.find("@"))!=std::string::npos)||((ISBN.find("!"))!=std::string::npos)||((ISBN.find("#"))!=std::string::npos)||((ISBN.find("$"))!=std::string::npos)||((ISBN.find("%"))!=std::string::npos)||((ISBN.find("¨"))!=std::string::npos)||((ISBN.find("&"))!=std::string::npos)||((ISBN.find("*"))!=std::string::npos)||((ISBN.find("("))!=std::string::npos)||((ISBN.find(")"))!=std::string::npos)||((ISBN.find("-"))!=std::string::npos)||((ISBN.find("="))!=std::string::npos)||((ISBN.find("+"))!=std::string::npos)||((ISBN.find("["))!=std::string::npos)||((ISBN.find("]"))!=std::string::npos)||((ISBN.find("}"))!=std::string::npos)||((ISBN.find("}"))!=std::string::npos)||((ISBN.find("ª"))!=std::string::npos)||((ISBN.find("º"))!=std::string::npos)||((ISBN.find("°"))!=std::string::npos)||((ISBN.find("/"))!=std::string::npos)||((ISBN.find("|"))!=std::string::npos)||((ISBN.find("?"))!=std::string::npos)||((ISBN.find(":"))!=std::string::npos)||((ISBN.find(";"))!=std::string::npos)||((ISBN.find(">"))!=std::string::npos))
                return 0;
            
            else if(((ISBN.find("<"))!=std::string::npos)||((ISBN.find(","))!=std::string::npos)||((ISBN.find("."))!=std::string::npos)||((ISBN.find("~"))!=std::string::npos)||((ISBN.find("´"))!=std::string::npos)||((ISBN.find("`"))!=std::string::npos)||((ISBN.find("£"))!=std::string::npos)||((ISBN.find("¢"))!=std::string::npos)||((ISBN.find("¬"))!=std::string::npos)||((ISBN.find("_"))!=std::string::npos)||((ISBN.find("'"))!=std::string::npos)||((ISBN.find("§"))!=std::string::npos)||((ISBN.find("·"))!=std::string::npos)||((ISBN.find("æ"))!=std::string::npos)||((ISBN.find("“"))!=std::string::npos)||((ISBN.find("©"))!=std::string::npos)||((ISBN.find("ð"))!=std::string::npos)||((ISBN.find("°"))!=std::string::npos)||((ISBN.find("đ"))!=std::string::npos)||((ISBN.find("ŋ"))!=std::string::npos)||((ISBN.find("ħ"))!=std::string::npos)||((ISBN.find("→"))!=std::string::npos)||((ISBN.find("ˀ"))!=std::string::npos)||((ISBN.find("ĸ"))!=std::string::npos)||((ISBN.find("ł"))!=std::string::npos)||((ISBN.find("µ"))!=std::string::npos))
                return 0;
            
            else if(((ISBN.find("”"))!=std::string::npos)||((ISBN.find("ø"))!=std::string::npos)||((ISBN.find("þ"))!=std::string::npos)||((ISBN.find("®"))!=std::string::npos)||((ISBN.find("ß"))!=std::string::npos)||((ISBN.find("ŧ"))!=std::string::npos)||((ISBN.find("↓"))!=std::string::npos)||((ISBN.find("„"))!=std::string::npos)||((ISBN.find("»"))!=std::string::npos)||((ISBN.find("←"))!=std::string::npos)||((ISBN.find("«"))!=std::string::npos)||((ISBN.find("Æ"))!=std::string::npos)||((ISBN.find("Ð"))!=std::string::npos)||((ISBN.find("Ŋ"))!=std::string::npos)||((ISBN.find("Ħ"))!=std::string::npos)||((ISBN.find("Ł"))!=std::string::npos)||((ISBN.find("Ø"))!=std::string::npos)||((ISBN.find("Þ"))!=std::string::npos)||((ISBN.find("ẞ"))!=std::string::npos)||((ISBN.find("Ŧ"))!=std::string::npos))
                return 0;
            else
            {
                if((((ISBN.find("0"))== std::string::npos) && ((ISBN.find("1"))== std::string::npos) && ((ISBN.find("2"))== std::string::npos) && ((ISBN.find("3"))== std::string::npos) && ((ISBN.find("4"))== std::string::npos) && ((ISBN.find("5"))== std::string::npos) && ((ISBN.find("6"))== std::string::npos) && ((ISBN.find("7"))== std::string::npos) && ((ISBN.find("8"))== std::string::npos) && ((ISBN.find("9"))== std::string::npos)))
                    return 0;
                else if(ISBN.find(" ")!=std::string::npos)
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
    Pilha_livros* pilha_livros = new Pilha_livros();

    int escolha = 1;

        string ISBN;
        string nome;
        int prioridade=6;

    while(escolha!=0)
    {

        cout<<"\n\n«≃«≃«≃«≃«≃«≃«≃«≃«≃«≃«≃«≃«≃ŧMenuŧ≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»≃»";
        cout<<"\n\n1 -> Inserir livro na Pilha";
        cout<<"\n2 -> Mostrar todos da Pilha";
        cout<<"\n3 -> Buscar uma livro na Pilha";
        cout<<"\n4 -> Remover uma livro da Pilha";
        cout<<"\n5 -> Verificar se a Pilha está vazia";
        cout<<"\n6 -> Mostrar livro do topo da Pilha";
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

        switch(escolha){

            case(1):{
                cout<<"ISBN: ";
                cin.ignore();
                getline(cin,ISBN);

                while(tratando_ISBN(ISBN)==0)
                {
                    cout<<"O ISBN inserido e invalido: \n";
                    cout<<"Insira aqui um ISBN diferente: ";
                    getline(cin,ISBN);

                    if(tratando_ISBN(ISBN)==1)
                        break;
                }

                cout<<"nome: ";
                getline(cin,nome);
                
                pilha_livros->inserir_final(ISBN, nome);
                    
            }break;

            case(2):{
                cout<<"Pilha:"<<end;
                pilha_livros->mostrar_todos();

            }break;

            case(3):{
                cout<<"ISBN: ";
                cin.ignore();
                getline(cin,ISBN);
                pilha_livros->Buscar_livro(ISBN);
            }break;

            case(4):{
                pilha_livros->remover();
                
            }break;

            case(5):{
                if(pilha_livros->vazia())    
                    cout<<"A pilha está vazia!";
                else
                    cout<<"A Pilha não está vazia!!";
                
            }break;

            case(6):{
                pilha_livros->mostrar_livro_do_topo();
                
            }break;

            default:
                break;
        }
    }

    return 0;
}
