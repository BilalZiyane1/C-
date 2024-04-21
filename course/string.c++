#include <iostream>
int main (){
   std::string name,nickname ;
   std::cout <<"enter your name ";
   std::getline(std::cin,name);
   std::cout <<"enter wour nickname ";
   std::cin >> nickname;
   std::cout<< name.at(0) << std::endl;
   name.length() >12 ? std::cout<<"greater than the acceptable \n" : std::cout << "this size is acceptable\n";
   name.empty() ? std::cout<<"you must write something " : std::cout <<"what you wrote has been regestrated \n";
   name.append(nickname );
   std::cout << "your username is " << name ;
   return 0;
}

//.length() it gives us the length of a string
//.empty() it returns a booleen value weither a string variable is empty or not 
//.clear()it clears the content of a string variable 
//.aprend(""|| ***) adds a string to something 
//.at(index) gives the caractere wich its index is written in the function 
//.insert(index,''||**) that let us insert a desirable caractere in a string 
//.find('') gives the index of the looking for caractere
//.erase(beggining index , ending index ) let us delete allcaractere int the interval given 
