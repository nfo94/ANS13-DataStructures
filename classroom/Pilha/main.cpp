#include <cstdlib>
#include "Stack.h"
#include <string>
using namespace std;

int main(int argc, char** argv) {
    Stack<string>  minhaPilha=Stack<string>();

    // Verifica se a lista está vazia (Teste com a lista vazia)
    if (minhaPilha.isEmpty()) 
        cout<<"A minha pilha está vazia"<<endl;
    else
        cout<<"A minha pilha possui "<<minhaPilha.size()<<" elemento(s)"<<endl;
  
    // inclusão na pilha (teste do push)
    minhaPilha.push("João");
    minhaPilha.push("José");
    minhaPilha.push("Jesus");
    minhaPilha.push("Maria");   
    minhaPilha.print();   
    
    // consulta o topo da pulha (teste do top)
    try {
        cout<<minhaPilha.top()<<endl;        
    }
    catch(const char* e){
        cout<<e<<endl;
    } 

    // consulta e retira o topo da pilha (teste do top and pop)
    try {
        cout<<minhaPilha.topAndPop()<<endl;        
    }
    catch(const char* e){
        cout<<e<<endl;
    } 
        
    // retira o topo da pilha (teste do pop)
    minhaPilha.pop();
    minhaPilha.print();
    
    // retira e usa o topo da pilha
    try {
        cout<<minhaPilha.topAndPop()<<endl;        
    }catch(const char* e){
        cout<<e<<endl;
    } 
    
    // insere no topo da pilha  
    minhaPilha.push("Madalena");
    minhaPilha.print();
    
    // limpa a pilha
    minhaPilha.clear();  
    minhaPilha.print(); 
     
    return 0;
}

