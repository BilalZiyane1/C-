#include "pile.h"
#include <cstdio>
int main(){
   pile p ;
   int taille ;
   do
   {
      printf("taille=");
      scanf("%d",&taille);
   } while (taille<1);
   p.pile(taille);
   int i,n;
   for(i=0;i<taille;i++){
      printf("n=");
      scanf("%d",&n);
      p.push(n);
   }
   while(p.pop(&n)){
      printf("%d\n",n);
      return 0;
   }
}