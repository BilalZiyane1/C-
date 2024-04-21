#include <iostream>
#include <ctime>
char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player, char computer);
int main(){
   char player;
   char comp;
   player = getuserchoice();
   comp=  getcomputerchoice();
   std::cout << "your choice is :" << '\n';
   showchoice(player);
   std::cout << "the computer choice is :" <<'\n';
   showchoice(comp);
   choosewinner(player,comp);
   return 0;
}
char getuserchoice(){
   char player;
   do
   {std::cout <<"ROCK-PAPER-SCISSORS GAME\n";
   std::cout << "************************\n";
   std::cout << "what's your choice?\n"<<"'r' for rock\n"<< "'p'for paper \n" <<"'s' for scissors\n";
   std::cin >> player;}while(player != 'p' && player!='r' && player != 's');
   return player; 
}
char getcomputerchoice()
{
   char computer;
   srand(time(0));
   int a=rand()%3 +1;
   switch (a)
   {
   case 1:
      return 'r';
   case 2:
      return 'p';
   case 3:
      return 's';
   }
   return 0;
}
void showchoice(char choice){
     switch (choice)
     {
     case 'r':
        std::cout<<"ROCK\n";
      break;
      case 'p':
        std::cout <<"PAPER\n";
      break;
      case 's':
        std::cout <<"SCISSORS\n";
      break;
     
     default:
      break;
     }
}
void choosewinner(char player, char computer){
   switch (player)
   {
   case 'r': if(computer=='r'){
                  std::cout <<"it's a tie";}
            else if (computer=='p'){
                  std::cout<<"you lose";}
            else if (computer=='s'){
                  std::cout << "you win";}
   break;
   case 'p': if(computer=='p'){
                  std::cout <<"it's a tie";}
            else if (computer=='s'){
                  std::cout<<"you lose";}
            else if (computer=='r'){
                  std::cout << "you win";}
   break;
   case 's': if(computer=='s'){
                  std::cout <<"it's a tie";}
            else if (computer=='r'){
                  std::cout<<"you lose";}
            else if (computer=='p'){
                  std::cout << "you win";}
   break;
   }
}

