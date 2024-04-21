#include <iostream> 
class pizza{
   public:
      std::string topping;
      std::string topping1;

      pizza(std::string x){
       topping=x;
       }
       pizza(std::string x,std::string y){
          topping =x;
          topping1=y;
       }
       pizza(){}
};
int main(){
   pizza pizza1("peporoni");
   pizza pizza2("pepper","meshroms");
   pizza pizza3;
   std::cout << pizza1.topping <<'\n';
   std::cout << pizza2.topping <<'\n';
   std::cout << pizza2.topping1 <<'\n';
   

}