#include <stdio.h>
#include <stdlib.h>
void tri(int tab[],int );
int main(){
   int p[20],n;
   printf("donner la taille de votre tableau: ");
   scanf("%d",&n);
   for(int i=0;i<n;i++){
      printf("tab=");
      scanf("%d",&p[i]);
      }
   tri(p,n);
}
void tri(int b[],int taille){
   int key;
   for (int i=1;i<taille;i++){
      key=b[i];
      int j=i-1;

   while (key<b[j] &&j>=0)
   {
      b[j+1]=b[j];
      j--;
   }
   b[j+1]=key;
   for(int a=0;a<taille;a++)
    {
      printf("%d",b[i]);
    }
   }
}