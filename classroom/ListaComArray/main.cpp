#include <cstdlib>
#include "Aluno.h"
#include "ArrayList.h"
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    ArrayList<Aluno> minhaLista=ArrayList<Aluno>();
    
    // Verifica se a lista está vazia (Teste com a lista vazia)
    if (minhaLista.isEmpty()) {
        cout<<"Lista Vazia"<<endl;
    }
    else {
       cout<<"A lista possui "<<minhaLista.size()<<" elementos"<<endl;
    }
    // adiciona alguns alunos na lsta (Teste de Add(T elem)
    minhaLista.add(Aluno("Jesus"));
    minhaLista.add(Aluno("Maria"));    
    minhaLista.add(Aluno("José"));
    minhaLista.add(Aluno("João"));  
    minhaLista.add(Aluno("Pedro"));
    minhaLista.add(Aluno("Judas"));    
    minhaLista.add(Aluno("Jorge")); 
    
    // Verifica se a lista está vazia (Teste com a lista não vazia)
    if (minhaLista.isEmpty()) {
        cout<<"Lista Vazia"<<endl;
    }
    else {
        cout<<"A lista possui "<<minhaLista.size()<<" elementos"<<endl;
    }
    
    // imprime a lista (teste de print)
    minhaLista.print();
    
    // Adiciona um elemento na posição 1 (teste de add (int index,T elem)
    minhaLista.add(Aluno("Madalena"),1);    
    minhaLista.print();

    // Remove um elemento na posição 3 (teste de remove (int index)
    minhaLista.remove(3);    
    minhaLista.print();

    // Remove o aluno Pedro (teste de remove (T elem)
    minhaLista.remove(Aluno("Pedro"));    
    minhaLista.print();
    
    // Obtém o objeto na posição index (teste de indexOf(T elem)
    cout<<"Índice de João="<<minhaLista.indexOf(Aluno("João"))<<endl;
    
    // Obtém o objeto na posição index (teste de get(int index) com index válido) 
    try {
        cout<<minhaLista.get(2).getNome()<<endl;            
    }
    catch (const char* ex) {
        cout<<ex<<endl;
    }
    // Obtém o objeto na posição index (teste de get(int index) com index inválido) 
    try {
        cout<<minhaLista.get(15).getNome()<<endl;            
    }
    catch (const char* ex) {
        cout<<ex<<endl;
    }    
    // limpa a lista (teste de clear e print com a lista vazia)
    minhaLista.clear();
    minhaLista.print();
  
    return 0;
}

