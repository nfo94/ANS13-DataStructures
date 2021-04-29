#include <cstdlib>
#include "Queue.h"
#include <string>
using namespace std;
int main(int argc, char** argv) {
    Queue<string>  minhaFila=Queue<string>();
    
    cout<<minhaFila.size()<<" elemento(s)"<<endl;
    if (minhaFila.isEmpty())
        cout<<"Fila vazia"<<endl;
    else 
        cout<<"Fila não vazia"<<endl;        
    
    minhaFila.enqueue("Jorge");
    minhaFila.enqueue("João");
    minhaFila.enqueue("José");
    minhaFila.enqueue("Jesus");
    minhaFila.enqueue("Maria");     
    cout<<minhaFila.size()<<" elemento(s)"<<endl;    
    if (minhaFila.isEmpty())
        cout<<"Fila vazia"<<endl;
    else 
        cout<<"Fila não vazia"<<endl; 
    minhaFila.print();
 

    // retira e usa a frente da fils
    try {
        cout<<minhaFila.dequeue()<<endl;        
    } catch(const char* e){
        cout<<e<<endl;
    } 
    minhaFila.print();   
    
    // inclusão na fils
    minhaFila.enqueue("Madalena");
    minhaFila.print();
    
    // limpa a fila
    minhaFila.clear();  
    minhaFila.print();  
 
    // retira de uma fila vazia 
    try {
        cout<<minhaFila.dequeue()<<endl;        
    }catch(const char* e){
        cout<<e<<endl;
    } 
    
   
    return 0;
}

