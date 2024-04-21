#include <iostream>
class student{
     public:
        std::string name;
        int age;
        double gpa;
        student(std::string name ,int age,double gpa){
          this->name =name;
          this->age = age;
          this->gpa = gpa;
        }
        /*student(std::string x,int y,double z){
         name=x;
         age=y;
         gpa=z;
        }*/
};
int main(){
   student student1("adam",24,3.2);
   student student2("amine",40,1.5);
   std::cout << student2.name <<'\n';
   std::cout << student2.age <<'\n';
   std::cout << student2.gpa <<'\n';
   return 0;
}