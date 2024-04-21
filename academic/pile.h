struct pile{
   int *t,size,top;
        pile(int);
   bool isempty();
   bool isfull();
   int push(int);
   int pop(int *);
};

