#include "pile.h"
pile::pile(int taille){
   t=new int [taille];
   size=taille;
   top=-1;
}
bool pile::isempty(){
   return (top==-1);
}
bool pile::isfull(){
   return (top==size-1);
}
int pile::push(int n){
   if(isfull())
     return 0;
   t[++top]=n;
     return 1;
}
int pile::pop(int *pn){
   if(isempty())
     return 0;
   *pn=t[top--];
     return 1;
}