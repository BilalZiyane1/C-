#include <cstdio>

struct pile {
   int *t;
   int size;
   int top;

   void init(int);
   bool isempty();
   bool isfull();
   int push(int);
   int pop(int *);
};

void pile::init(int taille){
   t = new int[taille];
   size = taille;
   top = -1;
}

bool pile::isempty(){
   return (top == -1);
}

bool pile::isfull(){
   return (top == size - 1);
}

int pile::push(int n){
   if(isfull())
     return 0;
   t[++top] = n;
   return 1;
}

int pile::pop(int *pn){
   if(isempty())
     return 0;
   *pn = t[top--];
   return 1;
}

int main() {
   pile p;
   int taille;

   do {
      printf("n=");
      scanf("%d",&taille);
   } while (taille < 1);

   p.init(taille);
   int i, n;

   for(i = 0; i < taille; i++) {
      printf("n=");
      scanf("%d",&n);
      p.push(n);
   }

   while(p.pop(&n)) {
      printf("%d\n",n);
   }

   return 0;
}
